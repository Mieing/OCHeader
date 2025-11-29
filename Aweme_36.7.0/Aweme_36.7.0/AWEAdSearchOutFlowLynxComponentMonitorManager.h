@class NSLock, NSMutableSet, NSString;

@interface AWEAdSearchOutFlowLynxComponentMonitorManager : HTSService <AWEAdSearchOutFlowLynxComponentMonitorManager>

@property (retain, nonatomic) NSMutableSet *cache;
@property (retain, nonatomic) NSLock *asynLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)lynxComponentMonitorPostEventWithContext:(id)a0 eventKey:(long long)a1;
- (void)searchWholeLynxCardDataReceiveWithSearchModel:(id)a0;
- (void)searchDynamicCardDataReceiveWithSearchModel:(id)a0;
- (void)searchOutFlowLynxComponentDataReceiveWithSearchModel:(id)a0;
- (void)searchOutFlowStructureButtonDataReceiveWithSearchModel:(id)a0;
- (void)searchOutFlowCouponButtonDataReceiveWithSearchModel:(id)a0;
- (void)searchCinemaTicketCardDataReceiveWithSearchModel:(id)a0;
- (void)searchOutFlowMerchandiseVideoButtonDataReceiveWithSearchModel:(id)a0;
- (void)searchOutFlowSandwichTopCardDataReceiveWithSearchModel:(id)a0;
- (void)searchOutFlowSandwichBottomCardVideoButtonDataReceiveWithSearchModel:(id)a0;
- (BOOL)isMonitorPost:(id)a0 label:(long long)a1 creativeID:(id)a2 adID:(id)a3 adStyleType:(long long)a4 lynxType:(unsigned long long)a5 lynxRawDataMd5:(id)a6;
- (void)monitorEventPostWithSchema:(id)a0 label:(long long)a1 creativeID:(id)a2 adID:(id)a3 adStyleType:(long long)a4 lynxType:(unsigned long long)a5 lynxRawDataMd5:(id)a6;
- (id)lynxComponentIdentifierWithSchema:(id)a0 label:(long long)a1 creativeID:(id)a2 adID:(id)a3 adStyleType:(long long)a4 lynxType:(unsigned long long)a5 lynxRawDataMd5:(id)a6;
- (id)adExtraDataFromDynamicPatch:(id)a0;
- (id)adCardNameFromModel:(id)a0;
- (id)getAdExtraRelatedInfo:(id)a0;
- (id)adExtraDataFromAweme:(id)a0;
- (void)generalSearchDataReceivedWithReponseModel:(id)a0;
- (void)resetMonitorCache;
- (void).cxx_destruct;

@end
