@class NSString, UIImageView, UILabel, UIView;
@protocol AWEPlayInteractionBottomButtonViewDelegateProtocol;

@interface AWEPlayInteractionBottomButtonCommentEntranceView : UIView <AWEPlayInteractionBottomButtonViewProtocol>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (copy, nonatomic) id /* block */ clickHandler;
@property (weak, nonatomic) id<AWEPlayInteractionBottomButtonViewDelegateProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)contentViewTapped;
- (void).cxx_destruct;
- (void)setContent:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupView;

@end
