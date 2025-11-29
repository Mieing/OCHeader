@class HTSLiveCommon;

@interface HTSLiveClientFallbackDynamicMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;

+ (id)descriptor;

@end
