@class NSArray;

@interface AWELiveFeedbackCondition : AWEBaseApiModel

@property (nonatomic) long long fromTime;
@property (nonatomic) long long toTime;
@property (retain, nonatomic) NSArray *actionIdsArray;
@property (nonatomic) long long actionType;
@property (nonatomic) long long previewTime;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
