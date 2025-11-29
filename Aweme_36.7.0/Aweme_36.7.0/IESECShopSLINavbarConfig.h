@class NSString;
@protocol IESECShopPageContextV2;

@interface IESECShopSLINavbarConfig : NSObject

@property (retain, nonatomic) id<IESECShopPageContextV2> context;
@property (copy, nonatomic) NSString *itemType;

+ (id)configWithContext:(id)a0 itemType:(id)a1;

- (void).cxx_destruct;

@end
