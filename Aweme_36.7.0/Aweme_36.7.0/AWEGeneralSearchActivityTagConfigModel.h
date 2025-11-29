@class NSString, AWEGeneralSearchActivityTagTextConfigModel;

@interface AWEGeneralSearchActivityTagConfigModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *tagURL;
@property (copy, nonatomic) NSString *tabType;
@property (nonatomic) long long iconWidth;
@property (nonatomic) long long iconHeight;
@property (nonatomic) long long maxShowCount;
@property (nonatomic) long long maxShowTime;
@property (nonatomic) long long showTimeInterval;
@property (nonatomic) double showStartTime;
@property (nonatomic) double showEndTime;
@property (retain, nonatomic) AWEGeneralSearchActivityTagTextConfigModel *tagText;
@property (copy, nonatomic) NSString *tagShowPriority;
@property (copy, nonatomic) NSString *tagType;

+ (id)renderJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
