@class NSString;

@interface AWEAnchorAdditionTabBarModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *tabID;
@property (copy, nonatomic) NSString *name;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
