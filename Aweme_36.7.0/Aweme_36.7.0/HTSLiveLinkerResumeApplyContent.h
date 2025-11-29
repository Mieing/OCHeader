@class HTSLiveLinkerResumeApplyContent_ApplyParam, NSString;

@interface HTSLiveLinkerResumeApplyContent : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveLinkerResumeApplyContent_ApplyParam *param;
@property (nonatomic) BOOL hasParam;
@property (copy, nonatomic) NSString *applyUser;
@property (nonatomic) long long roomId;

+ (id)descriptor;

@end
