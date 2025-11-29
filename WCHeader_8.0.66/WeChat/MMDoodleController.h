@class UIViewController, NSString, MMDoodlePenView, EditImageScrollView, MMDoodleToolbar, UIView;
@protocol MMDoodleViewControllerLayout, MMDoodleDelegate, MMDoodleDataSource;

@interface MMDoodleController : NSObject <EditImageOperationDelegate, MMDoodleToolbarDelegate, EditImagePenToolAttrDelegate>

@property (readonly, nonatomic) UIView *contentView;
@property (retain, nonatomic) EditImageScrollView *contentScrollView;
@property (readonly, nonatomic) UIView *toolsContainerView;
@property (retain, nonatomic) MMDoodleToolbar *toolbar;
@property (retain, nonatomic) MMDoodlePenView *penView;
@property (weak, nonatomic) UIViewController<MMDoodleViewControllerLayout> *viewControllerForLayout;
@property (readonly, nonatomic) BOOL isDoodling;
@property (weak, nonatomic) id<MMDoodleDelegate> delegate;
@property (weak, nonatomic) id<MMDoodleDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadSubviewsForTools;
- (void)layoutSubviewsForContent;
- (void)layoutSubviewsForTools;
- (void)setToolsHidden:(BOOL)a0;
- (void)setToolsHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)loadContentScrollView;
- (void)unloadContentScrollView;
- (void)layoutContentScrollView;
- (void)reloadContentScrollViewWithImage:(id)a0;
- (void)loadToolbarIfNeeded;
- (void)layoutToolbar;
- (void)startDoodlingIfNeeded;
- (void)startDoodling;
- (void)stopDoodling;
- (void)loadPenViewIfNeeded;
- (void)layoutPenView;
- (void)showPenView;
- (void)hidePenView;
- (void)refreshUndoPenButton;
- (void)undoLastPenEdit;
- (void)undoAllPenEdit;
- (void)addToolbarItem:(id)a0;
- (void)removeToolbarItem:(id)a0;
- (void)editImageViewDidStartDraw;
- (void)editImageViewdidEndDraw;
- (void)dragaAndDropWidget;
- (void)editImageViewLyricsWidgetHadBeenDeleted;
- (void)editImageViewLyricsWidgetHadBeenDoubleTap;
- (void)editImageViewPOIWidgetHiddenStateChange:(BOOL)a0;
- (void)onAddNewPOIWidget;
- (void)onAddRealNewMainTextWidget;
- (void)onTapGesture;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getAssetPreviewFrame;
- (void)doodleToolbar:(id)a0 penItemDidClick:(id)a1;
- (void)setSelectedColorFromGradientBar:(id)a0;
- (void)undoPenEditImage;
- (void)onClosePenToolAttrView;
- (void).cxx_destruct;

@end
