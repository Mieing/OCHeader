@class UIImageView, EcsRichTextLabel, UIControl;

@interface EcsFinderFeedNewBuyerInfoView : EcsFinderFeedSingleProductBaseView

@property (retain, nonatomic) EcsRichTextLabel *titleLabel;
@property (retain, nonatomic) UIControl *moreView;
@property (retain, nonatomic) EcsRichTextLabel *moreLabel;
@property (retain, nonatomic) UIImageView *arrowView;

- (void)setDataVM:(id)a0;
- (void)setupUI;
- (void).cxx_destruct;

@end
