@class NSString, UIImage;

@interface DUXAlertDialogTextLinkAction : DUXAlertDialogAction

@property (copy, nonatomic) NSString *linkedText;
@property (nonatomic) BOOL showArrow;
@property (retain, nonatomic) UIImage *prefixIcon;

+ (id)actionWithTitle:(id)a0 linkedText:(id)a1 showArrow:(BOOL)a2 click:(id /* block */)a3 dismiss:(BOOL)a4;
+ (id)actionWithTitle:(id)a0 linkedText:(id)a1 showArrow:(BOOL)a2 prefixIcon:(id)a3 click:(id /* block */)a4 dismiss:(BOOL)a5;

- (void).cxx_destruct;

@end
