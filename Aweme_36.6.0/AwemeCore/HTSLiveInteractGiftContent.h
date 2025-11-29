@class NSString;

@interface HTSLiveInteractGiftContent : IESLivePBBaseMessage

@property (nonatomic) int auditStatus;
@property (copy, nonatomic) NSString *reason;

+ (id)descriptor;

@end
