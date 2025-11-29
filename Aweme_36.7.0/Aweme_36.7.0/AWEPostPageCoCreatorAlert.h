@class NSString, TTTAttributedLabel, UILabel, UIGestureRecognizer, UIView;

@interface AWEPostPageCoCreatorAlert : UIView <UIGestureRecognizerDelegate, TTTAttributedLabelDelegate>

@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) UIView *splitLine;
@property (retain, nonatomic) UILabel *actionLabel;
@property (retain, nonatomic) UIGestureRecognizer *tap;
@property (retain, nonatomic) TTTAttributedLabel *content;
@property (copy, nonatomic) id /* block */ detailBlock;
@property (nonatomic) BOOL cancleByBlankSpace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)attributedLabel:(id)a0 didSelectLinkWithURL:(id)a1;
- (void)showOnView:(id)a0 animated:(BOOL)a1;
- (void)mainButtonTapped:(id)a0;
- (id)initWithTitle:(id)a0 attributedContent:(id)a1;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)dismiss:(BOOL)a0;
- (void)setupUI;
- (id)initWithTitle:(id)a0 content:(id)a1;
- (void)updateTitle:(id)a0;

@end
