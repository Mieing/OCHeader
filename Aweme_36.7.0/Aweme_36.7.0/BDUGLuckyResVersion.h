@class NSString;

@interface BDUGLuckyResVersion : BDUGLuckyBDModel

@property (nonatomic) long long version;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *accessKey;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
