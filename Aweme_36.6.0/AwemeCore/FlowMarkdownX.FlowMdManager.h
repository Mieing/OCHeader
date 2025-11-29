@class _TtC13FlowMarkdownX26FlowMdManagerParserOptions, _TtC13FlowMarkdownX20FlowMdManagerAppInfo, _TtC13FlowMarkdownX13FlowMdManager;

@interface FlowMarkdownX.FlowMdManager : NSObject {
    void /* unknown type, empty encoding */ sizeCache;
    void /* unknown type, empty encoding */ subscribeStatusGetter;
    void /* unknown type, empty encoding */ needShowCostomMenuGetter;
    void /* unknown type, empty encoding */ maxCellWidthGetter;
    void /* unknown type, empty encoding */ immersiveModeGetter;
    void /* unknown type, empty encoding */ layoutGetter;
    void /* unknown type, empty encoding */ fontAdjustDifferGetter;
    void /* unknown type, empty encoding */ debugMenuNameGetter;
    void /* unknown type, empty encoding */ appInfoGetter;
    void /* unknown type, empty encoding */ actionProvider;
    void /* unknown type, empty encoding */ alignProvider;
    void /* unknown type, empty encoding */ textProvider;
    void /* unknown type, empty encoding */ imageProvider;
    void /* unknown type, empty encoding */ imageViewProvider;
    void /* unknown type, empty encoding */ colorProvider;
    void /* unknown type, empty encoding */ toastProvider;
    void /* unknown type, empty encoding */ textViewProvider;
    void /* unknown type, empty encoding */ listStyleProvider;
    void /* unknown type, empty encoding */ cssClassConfigProvider;
    void /* unknown type, empty encoding */ imageFetcherIsNetworkError;
    void /* unknown type, empty encoding */ teaEventTracker;
    void /* unknown type, empty encoding */ _HMDTrackService;
    void /* unknown type, empty encoding */ stringRTLChecker;
    void /* unknown type, empty encoding */ isStringRTL;
    void /* unknown type, empty encoding */ externalImageFetcher;
    void /* unknown type, empty encoding */ imageContextMenuConfig;
    void /* unknown type, empty encoding */ darkModeReloadBlockAndExcute;
    void /* unknown type, empty encoding */ genCustomHTMLSourceBlock;
    void /* unknown type, empty encoding */ genCustomHTMLExtraBlock;
    void /* unknown type, empty encoding */ dequeueCustomHTMLViewBlock;
    void /* unknown type, empty encoding */ reuseMarkdownCustomViewBlock;
    void /* unknown type, empty encoding */ customSizeThatFitBlock;
    void /* unknown type, empty encoding */ customLastGlyphRectThatFitsBlock;
    void /* unknown type, empty encoding */ parseOptions;
    void /* unknown type, empty encoding */ logger;
}

@property (class, nonatomic, readonly) _TtC13FlowMarkdownX13FlowMdManager *shared;

@property (nonatomic, readonly) _TtC13FlowMarkdownX20FlowMdManagerAppInfo *appInfo;
@property (nonatomic, readonly) _TtC13FlowMarkdownX26FlowMdManagerParserOptions *parserOptions;

+ (BOOL)getNeedShowCustomMenuGetter:(id)a0;
+ (double)fontAdjustedDiffer;
+ (struct CGSize { double x0; double x1; })customSizeThatFits:(id)a0 source:(id)a1 isTyping:(BOOL)a2 preferredMaxWidth:(double)a3 message:(id)a4;
+ (BOOL)getSubscribeStatus:(id)a0;
+ (void)addDarkModeReloadBlockAndExcuteForView:(id)a0 block:(id /* block */)a1;
+ (BOOL)isRTLLanguage:(id)a0;
+ (BOOL)isStringRTL:(id)a0;
+ (void)log:(id)a0;
+ (void)hmdTrackServiceWithService:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3;
+ (void)teaTrackWithEvent:(id)a0 params:(id)a1;
+ (id)debugMenuItemName;
+ (BOOL)isimmersiveMode:(id)a0;
+ (struct CGSize { double x0; double x1; })linkIconSize;

- (void)setCssClassConfigProvider:(id /* block */)a0;
- (void)setNeedShowCustomMenuGetter:(id /* block */)a0;
- (void)setFontAdjustDifferGetter:(id /* block */)a0;
- (void)clearSizeCache;
- (void)saveSizeCache:(id)a0 width:(double)a1 index:(long long)a2 contentHash:(id)a3 size:(struct CGSize { double x0; double x1; })a4 extra:(id)a5;
- (void)setCustomSizeThatFitsBlock:(id /* block */)a0;
- (void)setSubscribeStatusGetter:(id /* block */)a0;
- (void)setDarkModeReloadBlockAndExcute:(id /* block */)a0;
- (void)setParserOptions:(id)a0;
- (void)setImageContextMenuConfig:(id /* block */)a0;
- (void)setImageViewProvider:(id /* block */)a0;
- (void)setAppInfoGetter:(id /* block */)a0;
- (void)setStringTRLChecker:(id /* block */)a0;
- (void)setIsStringRTL:(id /* block */)a0;
- (void)setLogger:(id /* block */)a0;
- (void)setHMDTrackService:(id /* block */)a0;
- (void)setTeaEventTracker:(id /* block */)a0;
- (void)setDebugMenuGetter:(id /* block */)a0;
- (void)setExternalImageFetcher:(id /* block */)a0;
- (void)setExternalImageFetcherIsNetworkError:(id /* block */)a0;
- (void)setMaxCellWidthGetter:(id /* block */)a0;
- (void)setImmersiveModeGetter:(id /* block */)a0;
- (id)provideCssClassConfig;
- (id)imageContextMenuConfigWithImage:(id)a0 imageData:(id)a1 debugClick:(id /* block */)a2;
- (id)provideImageView;
- (double)maxCellWidth:(id)a0 context:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
