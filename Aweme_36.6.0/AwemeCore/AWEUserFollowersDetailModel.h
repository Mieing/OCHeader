@class NSString, NSNumber;

@interface AWEUserFollowersDetailModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *iconURLString;
@property (retain, nonatomic) NSNumber *fansCount;
@property (copy, nonatomic) NSString *openURL;
@property (copy, nonatomic) NSString *appleID;
@property (copy, nonatomic) NSString *downloadURLString;
@property (copy, nonatomic) NSString *packageName;
@property (copy, nonatomic) NSString *appName;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isDouyin;
- (BOOL)isToutiao;
- (BOOL)isHuoshan;
- (BOOL)isDuanzi;
- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end
