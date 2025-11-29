@class NSArray, NSString, UIView, NSMutableArray, MMUIButton;
@protocol WNImageActionSheetViewDelegate;

@interface WNImageActionSheetView : UIView <WNActionButtonDelegate>

@property (nonatomic) double leftTitleLabelWidth;
@property (nonatomic) double buttonLabelWidth;
@property (retain, nonatomic) NSArray *arrLeftTitles;
@property (retain, nonatomic) NSArray *arrAllBtnInfos;
@property (retain, nonatomic) NSMutableArray *arrSelectedBtnIndexs;
@property (retain, nonatomic) NSMutableArray *arrAllBtns;
@property (retain, nonatomic) MMUIButton *closeButton;
@property (nonatomic) struct CGPoint { double x; double y; } oriPosition;
@property (retain, nonatomic) UIView *allButtonsView;
@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UIView *bottomView;
@property (weak, nonatomic) id<WNImageActionSheetViewDelegate> delegate;
@property (retain, nonatomic) NSArray *arrSelectedIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andTitles:(id)a1 andAllBtnInfos:(id)a2;
- (void)setUpUI;
- (void)generateLeftLabel:(id)a0 withOrigin:(struct CGPoint { double x0; double x1; })a1;
- (void)generateRightScrollView:(id)a0 andFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)addHeaderView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addBottomView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addGradientLayerFor:(id)a0 beginAlphaComponent:(double)a1 endAlphaComponent:(double)a2;
- (void)changeToSelectedBtn:(long long)a0 andIndex:(long long)a1;
- (void)updateSelectedBtns:(id)a0;
- (void)onClickButton:(id)a0;
- (void)onClickCancelButton:(id)a0;
- (void)onClickConfirmButton:(id)a0;
- (void)onClickButtonWithType:(long long)a0 andIndex:(long long)a1;
- (void).cxx_destruct;

@end
