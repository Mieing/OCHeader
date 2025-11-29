@class NSString, GameTeamUpSpecialGiftSettingDetail;

@interface WCFinderLiveStarteGameModeCacheModel : NSObject

@property (nonatomic) unsigned int cachedJoinTeamMode;
@property (retain, nonatomic) NSString *appId;
@property (nonatomic) BOOL userChange;
@property (retain, nonatomic) GameTeamUpSpecialGiftSettingDetail *cachedGameTeamUpSpecialGiftSettingDetail;

- (void)updateJoinTeamMode:(unsigned int)a0 userChange:(BOOL)a1;
- (void).cxx_destruct;

@end
