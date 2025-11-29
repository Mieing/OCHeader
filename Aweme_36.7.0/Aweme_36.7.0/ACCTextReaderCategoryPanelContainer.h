@class ACCTextReadingCategorySelectPanel, NSString, ACCTextReadEffectSelectPanelModel, IESEffectModel, NSIndexPath;
@protocol ACCTextReaderTrackerProtocol;

@interface ACCTextReaderCategoryPanelContainer : UIView <ACCCategoryEffectSelectPanelObserver, ACCPanelViewProtocol, ACCTextReadEffectSelectViewProtocol>

@property (retain, nonatomic) ACCTextReadEffectSelectPanelModel *viewModel;
@property (retain, nonatomic) ACCTextReadingCategorySelectPanel *selectPanel;
@property (weak, nonatomic) id<ACCTextReaderTrackerProtocol> tracker;
@property (nonatomic) double startTime;
@property (retain, nonatomic) NSString *curTabSwitchType;
@property (retain, nonatomic) NSString *curTabName;
@property (nonatomic) unsigned long long lastSelectType;
@property (nonatomic, getter=isShowing) BOOL showing;
@property (nonatomic) double startTimeStamp;
@property (nonatomic) double selectItemTimeStamp;
@property (copy, nonatomic) id /* block */ didSelectSoundEffectCallback;
@property (copy, nonatomic) id /* block */ didTapFinishCallback;
@property (readonly, nonatomic) NSIndexPath *curIndex;
@property (readonly, nonatomic) IESEffectModel *curModel;
@property (copy, nonatomic) id /* block */ didCancel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)panelViewHeight;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dataSource:(id)a1 conflictKeyboard:(BOOL)a2 tracker:(id)a3;
- (double)panelContentHeight;
- (void)unselectItemAtIndex:(id)a0 reason:(unsigned long long)a1;
- (void)selectItemAtIndex:(id)a0 reason:(unsigned long long)a1;
- (void)finishPicking;
- (void)p_addActiveObservers;
- (void)p_handleKeyboardWillHideNotification:(id)a0;
- (void)p_willResignActive:(id)a0;
- (void)p_didBecomeActive:(id)a0;
- (id)tabTrackInfo;
- (id)tabTrackInfoOfIndex:(id)a0;
- (void)effectSelectPanel:(id)a0 switchToTab:(unsigned long long)a1 reason:(unsigned long long)a2;
- (void)onSelectPanelDidClickBackground:(id)a0;
- (void)onSelectPanelDidClickCancel:(id)a0;
- (void)onSelectPanelDidClickConfirm:(id)a0;
- (void)onSelectPanelDidShowData:(id)a0;
- (void)effectSelectPanel:(id)a0 willSelectItem:(id)a1 reason:(unsigned long long)a2 atIndex:(id)a3 fromIndex:(id)a4;
- (void)effectSelectPanel:(id)a0 didSelectItem:(id)a1 reason:(unsigned long long)a2 atIndex:(id)a3 fromIndex:(id)a4;
- (void)effectSelectPanel:(id)a0 multiSelectItem:(id)a1 reason:(unsigned long long)a2 atIndex:(id)a3;
- (void)effectSelectPanel:(id)a0 didUnselectItem:(id)a1 atIndex:(id)a2 reason:(unsigned long long)a3;
- (void)effectSelectPanel:(id)a0 favoriteItem:(id)a1 atIndex:(id)a2;
- (void)effectSelectPanel:(id)a0 unfavoriteItem:(id)a1 atIndex:(id)a2 redirectToIndex:(id)a3;
- (void)dismiss;
- (void).cxx_destruct;
- (void *)identifier;
- (void)dealloc;
- (void)showInView:(id)a0;
- (void)setupViews;
- (id)panelName;
- (void)p_removeObservers;
- (void)p_addObservers;

@end
