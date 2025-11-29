@class NSString, NSAttributedString;

@interface IESLivePKAnchorCancelPanel : HTSLivePopUpView

@property (copy, nonatomic) id /* block */ actionBlock;
@property (copy, nonatomic) NSString *actionStr;
@property (copy, nonatomic) NSString *cancelStr;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSAttributedString *attributedContent;

- (void)trackWithAction:(BOOL)a0;
- (void)actionButtonDidClick:(id)a0;
- (void)cancelButtonDidClick:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 content:(id)a1 cancel:(id)a2 action:(id)a3;
- (void).cxx_destruct;
- (void)layoutUI;

@end
