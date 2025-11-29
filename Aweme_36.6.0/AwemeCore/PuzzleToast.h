@class UIView;

@interface PuzzleToast : NSObject

@property (retain, nonatomic) UIView *toastView;

+ (void)showToast:(id)a0 withDuration:(long long)a1;
+ (void)showToast:(id)a0 withDuration:(long long)a1 andImage:(id)a2;
+ (void)showToast:(id)a0 withDuration:(long long)a1 andImage:(id)a2 limitTextLines:(BOOL)a3;

- (void)_showToast:(id)a0 withDuration:(long long)a1 andImage:(id)a2 limitTextLines:(BOOL)a3;
- (void)dissMiss;
- (void).cxx_destruct;

@end
