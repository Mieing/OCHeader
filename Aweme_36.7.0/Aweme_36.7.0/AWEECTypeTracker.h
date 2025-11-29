@class NSString, NSMutableSet;

@interface AWEECTypeTracker : NSObject <AWEECTrackerProtocol>

@property (retain, nonatomic) NSMutableSet *reportSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isProductDetailPage:(id)a0;
- (void)appendEntranceInfoWithModel:(id)a0 btmTrackerModel:(id)a1 scene:(id)a2;
- (id)bcmBiz;
- (id)getGroupTypeInfoRawChain:(id)a0;
- (void)reportAlogIfNeededForParams:(id)a0;
- (id)getGroupTypeInfoRawChain:(id)a0 index:(long long)a1 visitProductDetail:(BOOL)a2;
- (BOOL)isLiveInterruptPage:(id)a0;
- (BOOL)isVideoInterruptPage:(id)a0;
- (BOOL)isLiveOrVideoInterruptPage:(id)a0;
- (BOOL)isSupportBackTrackingPage:(id)a0;
- (BOOL)isOrderSubmitPage:(id)a0;
- (BOOL)isSKUPage:(id)a0;
- (BOOL)isProductExplainRecordPage:(id)a0;
- (BOOL)isSchemaJumpPage:(id)a0;
- (BOOL)isOtherEnableBackPage:(id)a0;
- (void)reportAlogStartAt:(double)a0;
- (void).cxx_destruct;
- (id)init;

@end
