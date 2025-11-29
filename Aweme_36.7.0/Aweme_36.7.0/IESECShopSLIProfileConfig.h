@class NSString;
@protocol IESECShopPageContextV2;

@interface IESECShopSLIProfileConfig : NSObject

@property (retain, nonatomic) id<IESECShopPageContextV2> context;
@property (copy, nonatomic) NSString *itemType;
@property (nonatomic) double preferredWidth;

+ (id)configWithContext:(id)a0 itemType:(id)a1 preferredWidth:(double)a2;

- (void).cxx_destruct;

@end
