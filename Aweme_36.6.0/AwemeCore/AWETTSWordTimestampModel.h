@class NSString;

@interface AWETTSWordTimestampModel : AWEBaseBizConfigModel

@property (copy, nonatomic) NSString *word;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
