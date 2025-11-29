@class NSData;
@protocol WCAppAuthFetchLogicDelegate;

@interface WCAppAuthFetchLogic : MMObject <PBMessageObserverDelegate>

@property (weak, nonatomic) id<WCAppAuthFetchLogicDelegate> delegate;
@property (retain, nonatomic) NSData *nextPageData;
@property (nonatomic) unsigned int nextPageFlag;

- (id)initWithDelegate:(id)a0;
- (BOOL)fetchAuthenticatedApps;
- (BOOL)isFetchEnd;
- (void)handleFetchResp:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
