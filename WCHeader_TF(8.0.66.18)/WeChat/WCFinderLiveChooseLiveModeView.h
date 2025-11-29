@class WCFinderLiveStarterSwitchModeItem, NSString, CAShapeLayer, UIView, WCFinderLiveChooseLiveModeViewModel, MMTableView;
@protocol MMFinderLiveChooseLiveModeDelegate;

@interface WCFinderLiveChooseLiveModeView : MMPageSheetBaseView <WCFinderLiveChooseLiveModeViewModelDelegate> {
    WCFinderLiveChooseLiveModeViewModel *_chooseOrientationViewModel;
}

@property (readonly, nonatomic) WCFinderLiveChooseLiveModeViewModel *chooseOrientationViewModel;
@property (retain, nonatomic) CAShapeLayer *shapeLayer;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) WCFinderLiveStarterSwitchModeItem *switchModeItem;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) BOOL animateDismissOnSelection;
@property (weak, nonatomic) id<MMFinderLiveChooseLiveModeDelegate> operationDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)totalSubModeCountWithLiveMode:(unsigned long long)a0 hideLandscpe:(BOOL)a1 hideKTVLiveMode:(BOOL)a2;
+ (id)generateDataItemListWithLiveMode:(unsigned long long)a0 hideLandscpe:(BOOL)a1 disableVideoLandscape:(BOOL)a2 hideKTVLiveMode:(BOOL)a3 isFromNewStartController:(BOOL)a4 redDotQueryBlock:(id /* block */)a5 redDotExposeBlock:(id /* block */)a6 redDotClickBlock:(id /* block */)a7;
+ (id)generateSubItemWithLiveModeInfo:(id)a0 disableSubTypes:(id)a1;
+ (id)generateAudioSubItemWithAudioSubType:(unsigned long long)a0;
+ (id)generateAudioSubItemWithAudioSubType:(unsigned long long)a0 disableSubTypes:(id)a1;
+ (id)generateVideoSubItemWithVideoSubType:(unsigned long long)a0;
+ (id)generateVideoSubItemWithVideoSubType:(unsigned long long)a0 disableSubTypes:(id)a1;
+ (id)getSelectedClarityDataItem:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)createUI;
- (void)updateWithSwitchModeItem:(id)a0 dataArray:(id)a1;
- (void)updateWithSelectedSubItem:(id)a0 dataArray:(id)a1;
- (void)layoutUI;
- (void)setupPageSheetConfig;
- (void)leftButtonAction;
- (double)contentViewHeight;
- (double)getTableHeight;
- (void)didSelectRowWithItem:(id)a0 indexPath:(id)a1;
- (void)selectStateWithLiveModeSubItem:(id)a0 dataArray:(id)a1;
- (void)pageSheetDidDisappear;
- (void).cxx_destruct;

@end
