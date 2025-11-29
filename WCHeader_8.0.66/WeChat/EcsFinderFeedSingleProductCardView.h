@class EcsTagsView, EcsRichTextLabel;

@interface EcsFinderFeedSingleProductCardView : EcsFinderFeedSingleProductBaseView

@property (retain, nonatomic) EcsRichTextLabel *titleLabel;
@property (retain, nonatomic) EcsTagsView *tagsView;
@property (retain, nonatomic) EcsRichTextLabel *priceLabel;
@property (retain, nonatomic) EcsTagsView *priceDescTagsView;
@property (copy, nonatomic) id /* block */ onClickTitle;
@property (copy, nonatomic) id /* block */ onClickPrice;

- (void)setDataVM:(id)a0;
- (void)setupUI;
- (void).cxx_destruct;

@end
