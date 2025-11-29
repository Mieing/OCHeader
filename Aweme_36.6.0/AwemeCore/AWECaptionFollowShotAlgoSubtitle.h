@class NSString;

@interface AWECaptionFollowShotAlgoSubtitle : AWEBaseBizConfigModel

@property (copy, nonatomic) NSString *text;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
