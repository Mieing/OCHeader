@class UILabel, NSString;

@interface CJPayToastView : UIView

@property (retain, nonatomic) UILabel *label;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) double time;
@property (copy, nonatomic) id /* block */ completionBlock;

+ (double)textWidth;
+ (id)toastTitle:(id)a0 timestamp:(double)a1 inWindow:(id)a2;
+ (id)toast:(id)a0 code:(id)a1 duration:(double)a2 inWindow:(id)a3;
+ (id)toastTitle:(id)a0 timestamp:(double)a1 inWindow:(id)a2 showEndCompletion:(id /* block */)a3;
+ (id)toast:(id)a0 inWindow:(id)a1;
+ (id)toast:(id)a0 code:(id)a1 inWindow:(id)a2;
+ (id)textFont;

- (void)hideToast;
- (void)showInWindow:(id)a0;
- (void).cxx_destruct;

@end
