@class NSString, AWELiteSwipeMaskDataModel, AWELuckyCatPendant;

@interface AWELiteSwipeTaskModel : AWELiteBaseApiModel

@property (nonatomic) long long taskId;
@property (copy, nonatomic) NSString *taskKey;
@property (nonatomic) long long curTimes;
@property (nonatomic) long long maxTimes;
@property (nonatomic) BOOL taskCompleted;
@property (retain, nonatomic) AWELiteSwipeMaskDataModel *maskData;
@property (retain, nonatomic) AWELuckyCatPendant *pendant;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
