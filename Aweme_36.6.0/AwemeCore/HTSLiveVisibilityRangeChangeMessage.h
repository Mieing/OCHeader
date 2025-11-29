@class HTSLiveCommon;

@interface HTSLiveVisibilityRangeChangeMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) long long visibilityRange;

+ (id)descriptor;

@end
