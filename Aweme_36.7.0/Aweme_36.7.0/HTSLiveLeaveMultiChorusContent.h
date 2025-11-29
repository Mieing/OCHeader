@class HTSLiveMultiChorusCommonContent;

@interface HTSLiveLeaveMultiChorusContent : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveMultiChorusCommonContent *common;
@property (nonatomic) BOOL hasCommon;

+ (id)descriptor;

@end
