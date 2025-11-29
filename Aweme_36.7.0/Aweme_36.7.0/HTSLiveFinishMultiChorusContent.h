@class NSString, HTSLiveMultiChorusCommonContent;

@interface HTSLiveFinishMultiChorusContent : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveMultiChorusCommonContent *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) int finishReason;
@property (copy, nonatomic) NSString *toast;

+ (id)descriptor;

@end
