@class IESLiveStreamXPresetParam;

@interface IESLiveLinkmicClientExtra : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveStreamXPresetParam *streamXPresetParam;
@property (nonatomic) BOOL hasStreamXPresetParam;

+ (id)descriptor;

@end
