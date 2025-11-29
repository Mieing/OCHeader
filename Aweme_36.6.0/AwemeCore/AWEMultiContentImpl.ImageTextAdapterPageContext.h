@class UIColor, NSDictionary, NSString;

@interface AWEMultiContentImpl.ImageTextAdapterPageContext : BDMultiContentContainer.ImageTextPageContext <AFDAlbumPageContextProtocol> {
    void /* unknown type, empty encoding */ isColdStartFirst;
    void /* unknown type, empty encoding */ _cellColor;
    void /* unknown type, empty encoding */ _preferSinkingTransition;
    void /* unknown type, empty encoding */ _isInFullPageTransition;
    void /* unknown type, empty encoding */ _showFullscreenBackgroundView;
    void /* unknown type, empty encoding */ _hideSticker;
    void /* unknown type, empty encoding */ _userScrolled;
    void /* unknown type, empty encoding */ _livePhotoPlayMode;
    void /* unknown type, empty encoding */ _isLivePhotoAutoPlayMode;
    void /* unknown type, empty encoding */ _livePhotoPlayControlButtonLayoutInfo;
    void /* unknown type, empty encoding */ _livePhotoPlayControlButtonDisplayMode;
    void /* unknown type, empty encoding */ _livePhotoPlayControlMenuItemType;
    void /* function */ livePhotoAutoplayChangeBlock;
    void /* function */ livePhotoPlayControlMenuVisibilityBlock;
    void /* function */ logExtra;
    void /* function */ trackVideoPlayFinishBlock;
    void /* function */ trackAlbumPlayFinishBlock;
    void /* function */ albumContainerSlideBlock;
    void /* function */ hasTrackedVideoPlayBlock;
    void /* function */ fastPlayEnterMethod;
}

@property (nonatomic) unsigned long long contentMode;
@property (nonatomic, weak) void /* function */ pageContext;
@property (nonatomic, weak) void /* function */ placeHolderImage;
@property (nonatomic, weak) void /* function */ contentModeDelegate;
@property (nonatomic) BOOL calculateColorNotShow;
@property (nonatomic) BOOL enablePreloadOpt;
@property (nonatomic) BOOL enablePageScrollConfig;
@property (nonatomic) BOOL needFitThemeChange;
@property (nonatomic) BOOL disableSticker;
@property (nonatomic, retain) UIColor *cellColor;
@property (nonatomic) BOOL preferSinkingTransition;
@property (nonatomic) BOOL isInFullPageTransition;
@property (nonatomic) BOOL showFullscreenBackgroundView;
@property (nonatomic) BOOL hideSticker;
@property (nonatomic) BOOL userScrolled;
@property (nonatomic) BOOL isUseManualScrollPause;
@property (nonatomic) struct { unsigned long long x0; struct CGPoint { double x0; double x1; } x1; } livePhotoPlayControlButtonLayoutInfo;
@property (nonatomic) unsigned long long livePhotoPlayControlButtonDisplayMode;
@property (nonatomic) unsigned long long livePhotoPlayControlMenuItemType;
@property (nonatomic) BOOL isLivePhotoPlayControlMenuShowing;
@property (nonatomic, weak) void /* function */ livePhotoPlayControlButtonExternalDelegate;
@property (nonatomic, copy) id /* block */ livePhotoAutoplayChangeBlock;
@property (nonatomic, copy) id /* block */ livePhotoPlayControlMenuVisibilityBlock;
@property (nonatomic) BOOL isSyncingWithOtherHandler;
@property (nonatomic) BOOL isScrollDisabled;
@property (nonatomic, copy) NSDictionary *logExtra;
@property (nonatomic) BOOL disableEnterProfile;
@property (nonatomic, copy) id /* block */ trackVideoPlayFinishBlock;
@property (nonatomic, copy) id /* block */ trackAlbumPlayFinishBlock;
@property (nonatomic, copy) id /* block */ albumContainerSlideBlock;
@property (nonatomic, copy) id /* block */ hasTrackedVideoPlayBlock;
@property (nonatomic) BOOL hasTrackedVideoPlayFinish;
@property (nonatomic) BOOL disableGraphicPlaytimeTrack;
@property (nonatomic) BOOL disableGraphicPlayTimeFeedTrack;
@property (nonatomic) BOOL padHasRotate;
@property (nonatomic, copy) NSString *fastPlayEnterMethod;
@property (nonatomic, weak) void /* function */ delegate;
@property (nonatomic) BOOL notFadeOut;
@property (nonatomic) BOOL isSimpleSyncPlayState;
@property (nonatomic) double gradientBottomOffset;

- (unsigned long long)richContentPlayMode;
- (void)setLivePhotoPlayMode:(unsigned long long)a0;
- (unsigned long long)getLivePhotoPlayModeWithNeedActual:(BOOL)a0;
- (void)subscribeNeedFastPlayWithSkip:(long long)a0 callback:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)setPlayMode:(unsigned long long)a0;

@end
