@class NSString, BDFileUploadiOSNetwork;

@interface BDFileUploadiOSDNSTTParser : NSObject <BDFileUploadiOSDNSProtocol>

@property (nonatomic) BOOL isUserCancel;
@property (copy, nonatomic) NSString *hostname;
@property (retain, nonatomic) BDFileUploadiOSNetwork *networkSession;
@property (copy, nonatomic) id /* block */ result;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)cancelled;
- (void)start:(id /* block */)a0;
- (void).cxx_destruct;
- (id)host;
- (void)_notifyError:(id)a0;
- (id)initWithHost:(id)a0;
- (void)dealloc;
- (void)cancel;
- (long long)parserType;

@end
