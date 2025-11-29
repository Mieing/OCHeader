@class NSString;

@interface Cancellation : WXPBGeneratedMessage

@property (nonatomic) unsigned long long cancellationApplyTime;
@property (nonatomic) int cancellationState;
@property (nonatomic) unsigned long long cancellationExecTime;
@property (retain, nonatomic) NSString *cancellationId;
@property (nonatomic) BOOL clearWonderfulVideo;

+ (void)initialize;

@end
