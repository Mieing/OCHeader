@class NSDictionary, AWEMusicDSPEventModel, AWEMiniLunaPrivacyGuideManager, AWEUserModel;
@protocol MusicService;

@interface AWEMiniLunaContext : NSObject

@property (retain, nonatomic) AWEUserModel *userModel;
@property (retain, nonatomic) AWEMusicDSPEventModel *eventModel;
@property (weak, nonatomic) id<MusicService> musicService;
@property (weak, nonatomic) id<MusicService> secondaryMusicService;
@property (retain, nonatomic) NSDictionary *extraParams;
@property (nonatomic) unsigned long long initTabType;
@property (weak, nonatomic) AWEMiniLunaPrivacyGuideManager *privacyManager;
@property (nonatomic) BOOL forbidShowInterceptViewFlag;

- (BOOL)needShowPrivacy;
- (void).cxx_destruct;
- (BOOL)isCurrentUser;

@end
