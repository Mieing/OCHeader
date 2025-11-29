@class NSString;

@interface IESLiveWalletApplyStageInfo : IESLivePBBaseMessage

@property (nonatomic) int enable;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *displayTime;
@property (nonatomic) int applyStatus;
@property (copy, nonatomic) NSString *applyStatusDesc;
@property (copy, nonatomic) NSString *tip;

+ (id)descriptor;

@end
