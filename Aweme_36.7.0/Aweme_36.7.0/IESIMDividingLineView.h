@class UILabel, UIView;

@interface IESIMDividingLineView : UIView

@property (retain, nonatomic) UIView *leftLineView;
@property (retain, nonatomic) UIView *rightLineView;
@property (retain, nonatomic) UILabel *dividingTextLabel;
@property (retain, nonatomic) UIView *dividingTextBackground;

- (void)p_createComponents;
- (void)p_layoutComponents;
- (void)updateOffset:(long long)a0;
- (void)updateDividingText:(id)a0;
- (void)updateWithHasBackgroundImg:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;

@end
