@class NSString, HTSLiveMultiChorusInfo;

@interface HTSLiveMultiChorusCommonContent : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *userId;
@property (retain, nonatomic) HTSLiveMultiChorusInfo *multiChorusInfo;
@property (nonatomic) BOOL hasMultiChorusInfo;

+ (id)descriptor;

@end
