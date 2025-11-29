@class HTSLiveMultiChorusCommonContent;

@interface HTSLiveJoinMultiChorusContent : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveMultiChorusCommonContent *common;
@property (nonatomic) BOOL hasCommon;

+ (id)descriptor;

@end
