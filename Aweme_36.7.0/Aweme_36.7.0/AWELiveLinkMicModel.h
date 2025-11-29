@class AWELiveLinkMicBattleSettingModel;

@interface AWELiveLinkMicModel : NSObject

@property (retain, nonatomic) AWELiveLinkMicBattleSettingModel *battleSettings;
@property (nonatomic) long long channelID;
@property (nonatomic) long long anchorConnectCount;

- (void).cxx_destruct;

@end
