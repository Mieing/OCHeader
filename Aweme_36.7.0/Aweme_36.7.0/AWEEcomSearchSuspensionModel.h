@class AWESearchGlobalCartModel, NSArray, NSString, AWEDoubleColumnSearchActivityModel, AWEEcomSearchCartContainerModel, AWESearchFeelGoodModel;

@interface AWEEcomSearchSuspensionModel : NSObject

@property (retain, nonatomic) AWESearchFeelGoodModel *feelGoodModel;
@property (retain, nonatomic) NSArray *pushTimeFeedOutLynxModel;
@property (retain, nonatomic) AWEDoubleColumnSearchActivityModel *activityContainer;
@property (retain, nonatomic) AWESearchGlobalCartModel *shoppingCart;
@property (copy, nonatomic) NSString *pendantParamsJSONStr;
@property (retain, nonatomic) AWEEcomSearchCartContainerModel *cartContainer;

- (void).cxx_destruct;

@end
