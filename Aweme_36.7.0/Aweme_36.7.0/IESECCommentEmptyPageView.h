@class UILabel, IESECUIButton, IESECUIImageView;
@protocol IESECCommentEmptyPageViewProtocol;

@interface IESECCommentEmptyPageView : UIView

@property (retain, nonatomic) IESECUIImageView *emptyImageView;
@property (retain, nonatomic) UILabel *errorHintLabel;
@property (retain, nonatomic) IESECUIButton *retryButton;
@property (weak, nonatomic) id<IESECCommentEmptyPageViewProtocol> delegate;

- (void)retryButtonClicked;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
