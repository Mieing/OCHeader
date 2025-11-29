@protocol IESECShopPageContextV2;

@interface IESECShopFrameworkAdapter : NSObject

@property (readonly, weak, nonatomic) id<IESECShopPageContextV2> context;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
