@class NSArray, AFDButton, NSMutableArray, AWERadarKeyboardViewModel;

@interface AWERadarKeyboardView : UIView

@property (retain, nonatomic) NSArray *keyValues;
@property (retain, nonatomic) NSMutableArray *buttons;
@property (retain, nonatomic) AFDButton *deleteBtn;
@property (nonatomic) double viewWidth;
@property (nonatomic) double itemSize;
@property (nonatomic) double itemSpacing;
@property (nonatomic) double fontSize;
@property (copy, nonatomic) id /* block */ inputComletion;
@property (retain, nonatomic) AWERadarKeyboardViewModel *model;

- (struct CGSize { double x0; double x1; })suggestSize;
- (void)setDeleteBtnDisabled;
- (void)setDeleteBtnNormal;
- (void)p_setupSize;
- (id)p_initButtonWithValue:(id)a0 cornerRadius:(double)a1;
- (void)p_clickButton:(id)a0;
- (void)p_setupUI;
- (struct CGSize { double x0; double x1; })screenSize;
- (void).cxx_destruct;
- (id)init;

@end
