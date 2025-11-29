@class NSString;

@interface BDUGLuckyLowUpdate : BDUGLuckyBDModel

@property (nonatomic) long long minSupportVersion;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *btnText;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
