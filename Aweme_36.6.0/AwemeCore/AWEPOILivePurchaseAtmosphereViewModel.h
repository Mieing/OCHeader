@class NSString, NSDictionary, NSArray, AWEPOILivePurchaseAtmosphereLayoutItem, AWEPOILivePurchaseAtmosphereBackgroundItem;

@interface AWEPOILivePurchaseAtmosphereViewModel : NSObject

@property (retain, nonatomic) NSDictionary *originData;
@property (retain, nonatomic) AWEPOILivePurchaseAtmosphereViewModel *lastViewModel;
@property (copy, nonatomic) NSString *showOrHide;
@property (copy, nonatomic) NSString *from;
@property (copy, nonatomic) NSString *productId;
@property (nonatomic) long long animationType;
@property (nonatomic) long long dataType;
@property (retain, nonatomic) NSArray *normalLayoutItems;
@property (weak, nonatomic) AWEPOILivePurchaseAtmosphereLayoutItem *normalXNumberItem;
@property (retain, nonatomic) AWEPOILivePurchaseAtmosphereBackgroundItem *normalLayoutBackgroundItem;
@property (retain, nonatomic) NSArray *nextStateLayoutItems;
@property (retain, nonatomic) NSArray *nextStateLayoutBackgroundItems;
@property (copy, nonatomic) NSDictionary *trackingParams;

+ (id)convertModelWithOriginData:(id)a0;
+ (id)convertModelWithDict:(id)a0;

- (void)analysisAnimationLogicWithOldViewModel:(id)a0;
- (void).cxx_destruct;

@end
