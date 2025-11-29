@class NSString, NSNumber, AWELuckyCatPendant;

@interface AWELuckyCatCountDownTaskModel : AWELiteBaseApiModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *category;
@property (copy, nonatomic) NSString *iconUrl;
@property (nonatomic) int showMs;
@property (nonatomic) double countDownMs;
@property (nonatomic) BOOL isNew;
@property (nonatomic) int totalAmount;
@property (retain, nonatomic) AWELuckyCatPendant *pendant;
@property (copy, nonatomic) NSString *taskKey;
@property (retain, nonatomic) NSNumber *taskId;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
