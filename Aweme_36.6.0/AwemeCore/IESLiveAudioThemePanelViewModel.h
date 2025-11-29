@class HTSEventContext, NSString, NSArray, IESLiveAudioThemeCellViewModel, HTSLiveAudioBGData, RACSubject, RACSignal, IESLiveInteractThemeManager, NSNumber;
@protocol IESLiveAudioBackgroundViewDataSource;

@interface IESLiveAudioThemePanelViewModel : NSObject

@property (nonatomic) BOOL uploadButtonHidden;
@property (nonatomic) unsigned long long ugcBgAbility;
@property (nonatomic) unsigned long long phase;
@property (copy, nonatomic) NSArray *itemArray;
@property (copy, nonatomic) NSString *anchorID;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) HTSLiveAudioBGData *currentSelectTheme;
@property (retain, nonatomic) IESLiveAudioThemeCellViewModel *currentThemeViewModel;
@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) RACSubject *reloadSubject;
@property (copy, nonatomic) NSString *source;
@property (weak, nonatomic) IESLiveInteractThemeManager *manager;
@property (copy, nonatomic) NSArray *animatedSupportFormatArr;
@property (copy, nonatomic) NSArray *imageSupportFormatArr;
@property (nonatomic) BOOL shouldBanUGC;
@property (readonly, nonatomic) RACSignal *reloadSignal;
@property (nonatomic) unsigned long long scene;
@property (weak, nonatomic) id<IESLiveAudioBackgroundViewDataSource> backgroundDataSource;

- (id)eventPage;
- (id)cellModelAtIndexPath:(id)a0;
- (double)itemRatio;
- (void)trackDeleteThemeDidClick:(id)a0;
- (void)trackDeleteThemeDidConfirm:(id)a0;
- (void)deleteUGCThemeWithIndexPath:(id)a0;
- (void)uploadButtonDidClick;
- (BOOL)canUploadVideoOrAnimatedImage;
- (void)uploadUGCThemeWithAsset:(id)a0 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 completion:(id /* block */)a2;
- (void)insertUGCImage:(id)a0;
- (id)generateCellViewModelWithModel:(id)a0;
- (void)didSelectThemeViewModel:(id)a0 isDefault:(BOOL)a1;
- (BOOL)canUploadUGCBackground;
- (BOOL)isInCertainPlayModes;
- (id)generateUGCModel:(id)a0;
- (void)insertUGCBgData:(id)a0;
- (BOOL)checkUploadAssetIsSupport:(id)a0;
- (id)generateUGCModelWithAsset:(id)a0 visibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 remoteUri:(id)a2;
- (void)deleteItemViewModel:(id)a0;
- (id)initWithAnchorID:(id)a0 source:(id)a1 roomID:(id)a2 phase:(unsigned long long)a3 scene:(unsigned long long)a4 manager:(id)a5 trackContext:(id)a6;
- (void)refreshPanelThemeList:(id /* block */)a0;
- (void)shouldBanUGC:(BOOL)a0;
- (unsigned long long)numberOfItems;
- (void).cxx_destruct;
- (id)itemAtIndexPath:(id)a0;
- (void)dealloc;
- (BOOL)isVideo;
- (void)didSelectItemAtIndexPath:(id)a0;
- (id)eventParams;

@end
