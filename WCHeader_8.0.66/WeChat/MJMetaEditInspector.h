@class MJInspectorToolBar, NSString, MJPublisherInspectorContainerView, MJMetaEditViewModel, MJPageView;
@protocol MJMetaEditInspectorDelegate;

@interface MJMetaEditInspector : UIViewController <MJPageViewDelegate, MJPageViewDataSource, MJStickerPickerViewControllerDelegate, MJMetaEditGeographicPanelDelegate>

@property (retain, nonatomic) MJPublisherInspectorContainerView *containerView;
@property (retain, nonatomic) MJMetaEditViewModel *viewModel;
@property (nonatomic) BOOL bFirstAppeared;
@property (retain, nonatomic) MJPageView *pageView;
@property (retain, nonatomic) MJInspectorToolBar *toolBar;
@property (nonatomic) BOOL hasChanges;
@property (weak, nonatomic) id<MJMetaEditInspectorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)setupViews;
- (void)setupCallback;
- (void)callBackDateIfNeeded;
- (void)reloadEditingPage;
- (long long)numberOfPagesInPageView:(id)a0;
- (id)pageView:(id)a0 titleItemAtIndex:(long long)a1;
- (id)pageView:(id)a0 contentItemAtIndex:(long long)a1;
- (void)stickerPicker:(id)a0 didChangeSelection:(id)a1 atIndex:(long long)a2;
- (void)didClickEditMetaEditGeographicPanel:(id)a0;
- (void)presentLocationPickerWithPanel:(id)a0;
- (void).cxx_destruct;

@end
