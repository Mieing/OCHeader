@class NSString, UIAlertController, UIAlertAction, NSMutableArray;
@protocol UIAlertViewDelegate;

@interface MMHookUIAlertView : UIView

@property (nonatomic, getter=isVisible) BOOL visible;
@property (nonatomic) long long clickedButtonIndex;
@property (retain, nonatomic) UIAlertAction *cancelAction;
@property (weak, nonatomic) UIAlertController *alertController;
@property (retain, nonatomic) NSMutableArray *actionList;
@property (copy, nonatomic) id /* block */ actionHandler;
@property (weak, nonatomic) id<UIAlertViewDelegate> delegate;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (readonly, nonatomic) long long numberOfButtons;
@property (nonatomic) long long cancelButtonIndex;
@property (readonly, nonatomic) long long firstOtherButtonIndex;

+ (BOOL)resolveInstanceMethod:(SEL)a0;

- (id)initWithTitle:(id)a0 message:(id)a1 delegate:(id)a2 cancelButtonTitle:(id)a3 otherButtonTitles:(id)a4;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (BOOL)isKindOfClass:(Class)a0;
- (long long)addButtonWithTitle:(id)a0;
- (id)buttonTitleAtIndex:(long long)a0;
- (void)show;
- (void)dismissWithClickedButtonIndex:(long long)a0 animated:(BOOL)a1;
- (void)dismissAlertWithComplete:(id /* block */)a0;
- (id)fakeAlertView;
- (void).cxx_destruct;

@end
