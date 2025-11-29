@class NSString;

@interface HTSLiveLowPcuGuideData : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *guideText;
@property (nonatomic) long long status;
@property (nonatomic) BOOL enableBackup;
@property (nonatomic) long long delayTime;

+ (id)descriptor;

@end
