@class NSMutableArray;

@interface IESLiveLinkMicAudienceGetAudienceSettingsResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *settingsArray;
@property (readonly, nonatomic) unsigned long long settingsArray_Count;
@property (nonatomic) BOOL isForbiddenShakeRoom;

+ (id)descriptor;

@end
