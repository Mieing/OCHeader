@class HTSLiveCommon;

@interface HTSLiveShowEffectMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) BOOL flashOperatingPlace;

+ (id)descriptor;

@end
