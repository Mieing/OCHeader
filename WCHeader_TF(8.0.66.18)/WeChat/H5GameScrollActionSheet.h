@class NSString, NSArray, UIView, UIButton;
@protocol H5GameScrollActionSheetDelegate;

@interface H5GameScrollActionSheet : UIView <UIScrollViewDelegate> {
    unsigned long long _columnOrRowCount;
    NSArray *_dataAry;
    UIView *_containerView;
    UIButton *_transparentBgBtn;
    long long _lastOrientation;
    BOOL _isLandScape;
    BOOL _bOrientationLocked;
}

@property (weak, nonatomic) id<H5GameScrollActionSheetDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithItems:(id)a0 OrientatioinLocked:(BOOL)a1;
- (void)dealloc;
- (BOOL)isSupportVisualEffect;
- (void)setupColorfulBar;
- (void)setupContainerView;
- (void)setupScrollViews;
- (void)setupScrollViewLanscape;
- (void)setupScrollViewPortrait;
- (id)getMenuButton:(id)a0;
- (void)onMenuButtonClicked:(id)a0;
- (void)setupTransparentView;
- (void)showInView:(id)a0;
- (void)dismissAnimated:(BOOL)a0;
- (void)onEmptyPlaceTap:(id)a0;
- (void)didRotate:(id)a0;
- (void).cxx_destruct;

@end
