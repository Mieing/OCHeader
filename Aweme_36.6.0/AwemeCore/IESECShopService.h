@protocol IESECShopPageContextV2;

@interface IESECShopService : NSObject

@property (readonly, weak, nonatomic) id<IESECShopPageContextV2> context;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
