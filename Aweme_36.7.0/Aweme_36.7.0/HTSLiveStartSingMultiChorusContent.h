@class HTSLiveMultiChorusCommonContent;

@interface HTSLiveStartSingMultiChorusContent : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveMultiChorusCommonContent *common;
@property (nonatomic) BOOL hasCommon;

+ (id)descriptor;

@end
