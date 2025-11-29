@class NSString;

@interface EndingPageScheduleButton : IESLivePBBaseMessage

@property (nonatomic) long long scene;
@property (copy, nonatomic) NSString *topText;
@property (nonatomic) int pushStatus;

+ (id)descriptor;

@end
