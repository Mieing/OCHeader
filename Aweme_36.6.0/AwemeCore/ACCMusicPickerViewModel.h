@class ACCMusicUIThemeModel, ACCMusicHotListViewModel, ACCMusicUsedListViewModel, NSString, ACCMusicVolumeViewModel, ACCMusicPickerToolbarViewModel, ACCImportMusicListViewModel, ACCMusicPickerUIConfiguration, ACCMusicRecommendListViewModel, ACCMusicFavoriteListViewModel;
@protocol ACCMusicTrackerProtocol;

@interface ACCMusicPickerViewModel : NSObject <ACCMusicPickerViewModelProtocol>

@property (nonatomic) BOOL showMusicSearch;
@property (retain, nonatomic) ACCMusicRecommendListViewModel *recommendListViewModel;
@property (retain, nonatomic) ACCMusicHotListViewModel *hotListViewModel;
@property (retain, nonatomic) ACCMusicFavoriteListViewModel *favoriteListViewModel;
@property (retain, nonatomic) ACCMusicUsedListViewModel *usedListViewModel;
@property (retain, nonatomic) ACCImportMusicListViewModel *importListViewModel;
@property (retain, nonatomic) ACCMusicPickerToolbarViewModel *toolbarViewModel;
@property (retain, nonatomic) ACCMusicVolumeViewModel *volumeViewModel;
@property (readonly, nonatomic) ACCMusicUIThemeModel *themeModel;
@property (retain, nonatomic) ACCMusicPickerUIConfiguration *UIConfig;
@property (nonatomic) BOOL showVolumeView;
@property (nonatomic) BOOL showToolbar;
@property (nonatomic) BOOL showTip;
@property (nonatomic) BOOL showImportMusic;
@property (retain, nonatomic) id<ACCMusicTrackerProtocol> tracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)listViewModelWithType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
