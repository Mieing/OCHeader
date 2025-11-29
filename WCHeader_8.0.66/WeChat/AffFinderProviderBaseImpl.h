@class AffFinderProviderCallback, NSString;

@interface AffFinderProviderBaseImpl : NSObject <AffFinderProviderBase>

@property (retain, nonatomic) AffFinderProviderCallback *callback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)loadContext;

- (id)finderGetCurrentUsername;
- (id)curTabSessionID;
- (id)curContextID;
- (void)saveFinderObject:(id)a0 scene:(int)a1 sessionBufferExtraKey:(id)a2;
- (id)getLocalFinderObject:(id)a0;
- (id)getCacheLocation;
- (id)getFeedSessionBuffer:(id)a0 scene:(int)a1 extraKey:(id)a2;
- (id)getContact:(id)a0;
- (id)finderGetCGIBaseRequest:(int)a0 scene:(int)a1;
- (void)finderRedDotDataReceiveWithPathKey:(id)a0 isAlreadExistRedDot:(BOOL)a1;
- (void)finderRedDotDataChangedWithPathKey:(id)a0;
- (void)finderRedDotDataRevokedWithPathKey:(id)a0;
- (void)finderRedDotDataReceiveRedDotBindObjectPathKey:(id)a0;
- (BOOL)finderRedDotWillAddAction:(id)a0;
- (void)finderRedDotHasAddActionAsync:(unsigned long long)a0 ctrlInfoData:(id)a1;
- (BOOL)finderRedDotWillDisposeAction:(id)a0;
- (BOOL)finderRedDotEnableUseCtrlInfoInNMStrategy:(id)a0 ignoreNMFrequency:(BOOL)a1 maxPriorityCtrlInfoData:(id)a2;
- (void)finderRedDotHasDisposeActionAsync:(unsigned long long)a0 path:(id)a1 ctrlInfoData:(id)a2;
- (void)finderRedDotDataChangedActionAsync:(unsigned long long)a0 actionType:(int)a1 subReasonType:(int)a2 fromCtrlInfoData:(id)a3 toCtrlInfoData:(id)a4 disposePath:(id)a5;
- (BOOL)reddotPersonalExposeClearSwitch;
- (int)getPrivateMsgTotalUnreadCountByUsername:(id)a0;
- (int)getCurFinderUnreadCountByUsername:(id)a0 fromRedDotPath:(BOOL)a1 finderMsgCount:(int)a2 finderMembershipCount:(int)a3;
- (void)reddotWillRevokeTipsUuidArray:(id)a0;
- (void).cxx_destruct;

@end
