@class NSString;

@interface EarlyWarningData : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *earlyWarningText;

+ (id)descriptor;

@end
