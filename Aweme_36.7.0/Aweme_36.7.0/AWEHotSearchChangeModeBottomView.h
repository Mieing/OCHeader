@class UIImageView, UIView;
@protocol AWEHotSearchChangeModeDelegate;

@interface AWEHotSearchChangeModeBottomView : UIView

@property (retain, nonatomic) UIImageView *closeImageView;
@property (retain, nonatomic) UIView *separateLine;
@property (retain, nonatomic) UIView *bottomBGView;
@property (retain, nonatomic) UIView *upperBGView;
@property (weak, nonatomic) id<AWEHotSearchChangeModeDelegate> delegate;

+ (long long)barTypeForAweme:(id)a0;

- (void)updateBackgroundColor:(id)a0 upColor:(id)a1;
- (void)updateType:(long long)a0;
- (void)closeFullMode:(id)a0;
- (id)colorStringAdjust:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
