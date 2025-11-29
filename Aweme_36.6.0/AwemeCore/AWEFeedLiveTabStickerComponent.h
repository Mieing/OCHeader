@class NSString, NSMutableArray, AWEFeedLiveTabStickerView;

@interface AWEFeedLiveTabStickerComponent : AWEFeedLiveTabBaseComponent <AWEFeedLiveTabViewControllerLifeCycleAction>

@property (retain, nonatomic) NSMutableArray *stickerData;
@property (retain, nonatomic) AWEFeedLiveTabStickerView *stickerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)componentStatus;
- (void)feedLiveTabDidEnter:(id)a0;
- (void)updateComponentWith:(id)a0;
- (void)bindService;
- (double)heightOfComponent;
- (void)viewTransitioningToSize:(struct CGSize { double x0; double x1; })a0;
- (void)reportTabShow;
- (void)tabModuleShowWithItem:(id)a0;
- (void)tabModuleClickWithItem:(id)a0;
- (id)tabModuleParamsWithItem:(id)a0;
- (void)revisitTrackWithItem:(id)a0;
- (id)moduleNameWithTagType:(int)a0;
- (double)topPadding;
- (void).cxx_destruct;
- (id)contentView;
- (id)init;
- (void)setupView;

@end
