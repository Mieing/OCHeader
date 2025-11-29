@class NSString, NSArray, AWEToutiaoGoodsWarmupModel, AWEToutiaoGoodsFullReductionModel, AWEGoodsLimitedTimeInfo, AWEToutiaoGoodsPresaleModel, AWEToutiaoGoodsButtonModel, AWEToutiaoGoodsVirtualModel;

@interface AWEToutiaoGoodsExtraModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *couponRuleNameList;
@property (copy, nonatomic) NSString *deliveryTime;
@property (copy, nonatomic) NSString *consultURL;
@property (copy, nonatomic) NSString *shopCartURL;
@property (copy, nonatomic) NSString *orderURL;
@property (copy, nonatomic) NSString *orderTMAURL;
@property (retain, nonatomic) AWEToutiaoGoodsVirtualModel *virtualModel;
@property (retain, nonatomic) AWEToutiaoGoodsPresaleModel *presaleModel;
@property (retain, nonatomic) AWEToutiaoGoodsWarmupModel *warmupModel;
@property (retain, nonatomic) AWEGoodsLimitedTimeInfo *limitedTimeInfo;
@property (retain, nonatomic) AWEToutiaoGoodsFullReductionModel *fullReduction;
@property (retain, nonatomic) AWEToutiaoGoodsButtonModel *toutiaoButton;
@property (nonatomic) BOOL checkSkuInfo;
@property (nonatomic) BOOL outOfLimit;
@property (copy, nonatomic) NSString *originType;
@property (copy, nonatomic) NSString *originID;
@property (copy, nonatomic) NSString *shopName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fullReductionJSONTransformer;
+ (id)virtualModelJSONTransformer;
+ (id)presaleModelJSONTransformer;
+ (id)warmupModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (unsigned long long)orderStatus;
- (BOOL)hasPresaleTag;
- (BOOL)hasWarmupTag;
- (id)warmupTagText;
- (BOOL)preSaleOngoing;
- (BOOL)hasLimitedTime;
- (double)reservationStartTime;
- (void).cxx_destruct;
- (id)init;
- (BOOL)hasReservation;

@end
