@class NSArray, CJPaySafeKeyboardStyleConfigModel;

@interface CJPaySafeKeyboard : UIView

@property (copy, nonatomic) NSArray *titleList;
@property (nonatomic) long long rowCount;
@property (nonatomic) long long columnCount;
@property (retain, nonatomic) CJPaySafeKeyboardStyleConfigModel *styleConfigModel;
@property (nonatomic) BOOL needRelayout;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastBounds;
@property (copy, nonatomic) id /* block */ numberClickedBlock;
@property (copy, nonatomic) id /* block */ characterClickedBlock;
@property (copy, nonatomic) id /* block */ deleteClickedBlock;
@property (copy, nonatomic) id /* block */ completeClickedBlock;
@property (nonatomic) unsigned long long keyboardType;

- (void)setupUIWithModel:(id)a0;
- (void)p_buttonClicked:(id)a0;
- (void)p_updateKeyBoardBtnSecureState;
- (void)p_resetLayout;
- (id)p_keyboardContentWithType:(unsigned long long)a0;
- (void)p_setupUIWithModel:(id)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setupUI;

@end
