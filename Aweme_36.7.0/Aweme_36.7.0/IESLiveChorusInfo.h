@class NSString;

@interface IESLiveChorusInfo : IESLivePBBaseMessage

@property (nonatomic) long long chorusId;
@property (copy, nonatomic) NSString *leadSingerId;
@property (nonatomic) long long startTime;
@property (nonatomic) long long finishTime;

+ (id)descriptor;

@end
