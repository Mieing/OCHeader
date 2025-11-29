@class NSString;

@interface AWEMusicPerformanceModel : AWEBaseApiModel

@property (nonatomic) long long performanceId;
@property (copy, nonatomic) NSString *postURL;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *time;
@property (copy, nonatomic) NSString *location;
@property (copy, nonatomic) NSString *schema;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
