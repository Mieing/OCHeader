@class NSString, CContact;

@interface WCFinderGetWechatHDHeadFetcher : NSObject <MessageObserverDelegate>

@property (retain, nonatomic) NSString *username;
@property (nonatomic) unsigned int uiDownloadEventID;
@property (retain, nonatomic) CContact *contact;
@property (nonatomic) BOOL allowNormalImg;
@property (copy, nonatomic) id /* block */ successfulBlock;
@property (copy, nonatomic) id /* block */ failedBlock;

- (id)initWithNormalImageIfHDNotFound:(BOOL)a0;
- (void)dealloc;
- (void)fetch;
- (void)fetchWithCompletion:(id /* block */)a0 failed:(id /* block */)a1;
- (void)downloadHDImg;
- (void)updateHDHead;
- (void)MessageReturn:(unsigned int)a0 MessageInfo:(id)a1 Event:(unsigned int)a2;
- (void).cxx_destruct;

@end
