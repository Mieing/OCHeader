@class IESLiveAnchorLinkmicUserSettings;

@interface GetSettingsResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveAnchorLinkmicUserSettings *settings;
@property (nonatomic) BOOL hasSettings;
@property (nonatomic) BOOL supportAiAssistant;

+ (id)descriptor;

@end
