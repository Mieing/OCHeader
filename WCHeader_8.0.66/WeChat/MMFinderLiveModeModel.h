@class NSArray, MMFinderLiveModeItem;

@interface MMFinderLiveModeModel : NSObject

@property (retain, nonatomic) NSArray *modeItems;
@property (retain, nonatomic) MMFinderLiveModeItem *selectedModeItem;
@property (nonatomic) BOOL hideAudioMode;
@property (nonatomic) BOOL hideKtvMode;

- (id)init;
- (void)setUpModeItems;
- (void)updateWithHideAudioMode:(BOOL)a0 hideKtvMode:(BOOL)a1;
- (void)updateSelectedModeItemToVideoMode:(BOOL)a0;
- (void)updateGameItemWithGameUserInfo:(id)a0 gameEntryScene:(long long)a1;
- (void)cleanCurrentGameItem;
- (void)updateSelectedModeItem:(id)a0;
- (BOOL)checkModeItemValid:(id)a0;
- (void)updateCachedSelectedItem;
- (void)cleanCachedGameItem;
- (id)getCachedSelectedItem;
- (void).cxx_destruct;

@end
