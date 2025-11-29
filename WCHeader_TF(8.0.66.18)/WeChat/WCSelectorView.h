@class UINavigationController, UIImageView, UIView, UIButton;
@protocol WCSelectorViewDataSource, WCSelectorViewDelegate;

@interface WCSelectorView : MMUIView {
    BOOL _bNeedLayout;
    UIButton *_addButton;
    UIView *_deleteView;
    double _fDeleteScrollViewOffset;
}

@property (nonatomic) BOOL bShowAddButton;
@property (nonatomic) struct CGPoint { double x; double y; } startPoint;
@property (nonatomic) double stepWidth;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (weak, nonatomic) id<WCSelectorViewDataSource> dataSource;
@property (weak, nonatomic) id<WCSelectorViewDelegate> delegate;
@property (weak, nonatomic) UINavigationController *navigationController;
@property (nonatomic) BOOL bHandleOutside;
@property (nonatomic) BOOL bHandelWholeView;
@property (nonatomic) BOOL bAlighRight;
@property (nonatomic) long long maxImageCount;
@property (nonatomic) BOOL enableDrag;

- (void)commmtInit;
- (id)init;
- (void)layoutSubviews;
- (void)reload;
- (void)layoutDeleteView;
- (id)getDisplayNameByUsername:(id)a0;
- (void)hideDeleteView;
- (void)showDeleteView;
- (void)reloadDeleteView;
- (void)hideAddView;
- (void)showAddView;
- (void)performClickAddView;
- (void)hideBackgroundView;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)delayedTouchesEnded:(id)a0;
- (void)delayedHandleWholeView;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)onAddButtonClicked:(id)a0;
- (void)onXviewClicked:(id)a0;
- (void).cxx_destruct;

@end
