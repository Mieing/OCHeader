@interface AWEMusicStreamingSwiftImpl.FavoriteMusicContainerViewModel : AWEBaseListViewModel <AWEMusicServiceDelegate> {
    void /* unknown type, empty encoding */ useNewModel;
    void /* unknown type, empty encoding */ cursor;
    void /* unknown type, empty encoding */ loadCount;
    void /* unknown type, empty encoding */ singleMusicSectionViewModel;
    void /* unknown type, empty encoding */ lunaSingleMusicSectionViewModel;
    void /* unknown type, empty encoding */ lunaLastCancelColletionModel;
    void /* unknown type, empty encoding */ lastCancelColletionModel;
    void /* unknown type, empty encoding */ collectMusicChanged;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dataContext;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tracker;
    void /* unknown type, empty encoding */ $__lazy_storage_$_modelTransformer;
    void /* unknown type, empty encoding */ diversionInfo;
    void /* unknown type, empty encoding */ lunaDiversionInfo;
    void /* unknown type, empty encoding */ _toastMessage;
    void /* unknown type, empty encoding */ _listState;
    void /* unknown type, empty encoding */ _playStatus;
    void /* unknown type, empty encoding */ _bottomPlayerBarShow;
    void /* unknown type, empty encoding */ _loadingProgress;
    void /* unknown type, empty encoding */ _currentDataState;
}

@property (nonatomic) long long dataState;

- (void)musicService:(id)a0 playStatusChanged:(long long)a1;
- (void)musicServiceMusicChanged:(id)a0;
- (void)favoriteActionWithNotice:(id)a0;
- (void)setupViewModel;
- (void).cxx_destruct;
- (id)init;

@end
