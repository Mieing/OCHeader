@class NSString, NSData;
@protocol WCAppAuthSearchLogicDelegate;

@interface WCAppAuthSearchLogic : MMObject <PBMessageObserverDelegate>

@property (weak, nonatomic) id<WCAppAuthSearchLogicDelegate> delegate;
@property (copy, nonatomic) NSString *keyword;
@property (retain, nonatomic) NSData *nextPageData;
@property (nonatomic) unsigned int nextPageFlag;
@property (nonatomic) unsigned int eventID;

- (id)initWithDelegate:(id)a0;
- (void)dealloc;
- (BOOL)search:(id)a0;
- (void)cancelLastKeyWordSearch;
- (BOOL)isSearching;
- (BOOL)isSearchEnd;
- (void)handleSearchResp:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
