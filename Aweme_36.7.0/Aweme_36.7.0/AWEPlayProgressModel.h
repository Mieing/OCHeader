@class NSString;

@interface AWEPlayProgressModel : AWEBaseApiModel

@property (nonatomic) double playProgress;
@property (nonatomic) double lastModifiedTime;
@property (copy, nonatomic) NSString *progressGuildBar;
@property (nonatomic) long long watchTimes;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
