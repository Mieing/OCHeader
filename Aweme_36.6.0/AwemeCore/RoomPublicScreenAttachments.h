@interface RoomPublicScreenAttachments : IESLivePBBaseMessage

@property (nonatomic) long long hotMessageTray;
@property (nonatomic) long long heightSetting;
@property (nonatomic) long long firstMessageShowOpt;
@property (nonatomic) long long anchorColdMessageShowOpt;

+ (id)descriptor;

@end
