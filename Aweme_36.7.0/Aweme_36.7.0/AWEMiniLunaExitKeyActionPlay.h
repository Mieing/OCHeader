@class AWEMusicService, AWEMusicFeedViewModel;

@interface AWEMiniLunaExitKeyActionPlay : AWEMiniLunaExitKeyAction

@property (weak, nonatomic) AWEMusicService *musicService;
@property (retain, nonatomic) AWEMusicFeedViewModel *model;

- (void).cxx_destruct;
- (id)actionName;
- (id)params;

@end
