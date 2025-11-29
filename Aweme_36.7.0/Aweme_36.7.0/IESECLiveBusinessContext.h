@class NSString, NSDictionary, NSArray, IESECLiveRoomParams;

@interface IESECLiveBusinessContext : NSObject <IESECLiveBusinessContextInterface>

@property (retain, nonatomic) IESECLiveRoomParams *coreParams;
@property (copy, nonatomic) NSString *jumpSchema;
@property (retain, nonatomic) NSDictionary *fissionCouponParams;
@property (nonatomic) BOOL shouldShowFissionCoupon;
@property (copy, nonatomic) NSString *CPSContent;
@property (copy, nonatomic) NSString *commonLiveSchema;
@property (nonatomic) BOOL quietAllowLawDisclaimer;
@property (copy, nonatomic) NSString *taskEnterFrom;
@property (copy, nonatomic) NSString *taskType;
@property (retain, nonatomic) NSDictionary *taskRequestParams;
@property (retain, nonatomic) NSDictionary *enterRoomRequest;
@property (nonatomic) BOOL shouldShowCouponPopup;
@property (retain, nonatomic) NSDictionary *passThroughLogData;
@property (copy, nonatomic) NSString *couponID;
@property (copy, nonatomic) NSString *ecomSceneIDs;
@property (copy, nonatomic) NSString *goodsListRelatedInfo;
@property (retain, nonatomic) NSDictionary *enterRoomCardData;
@property (nonatomic) BOOL isLinkMic;
@property (copy, nonatomic) NSString *ecomLinkMicRoomIDS;
@property (nonatomic) BOOL ecomLinkMicPopCardExist;
@property (copy, nonatomic) NSString *storeID;
@property (nonatomic) BOOL enableOpenListAnchor;
@property (copy, nonatomic) NSArray *pitayaSmartProduct;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_parseParams:(id)a0;
- (id)p_handleMoreLivePassThroughLogDataWithEcomLiveParams:(id)a0;
- (id)p_handleEcomSceneIDsWithEcomLiveParams:(id)a0;
- (id)defaultEcomSceneID;
- (id)initWithCoreParams:(id)a0;
- (void).cxx_destruct;

@end
