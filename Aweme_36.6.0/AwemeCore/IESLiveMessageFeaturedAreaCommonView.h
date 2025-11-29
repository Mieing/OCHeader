@class UIButton, UILabel;

@interface IESLiveMessageFeaturedAreaCommonView : IESLiveMessageFeaturedAreaView

@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) UILabel *placeHolderLabel;

- (void)switchToMessageListView;
- (void)addPublicScreenToContainer;
- (void)updateMessageListHeightWithFontSizeType:(unsigned long long)a0;
- (void)messageFeaturedPublicScreenFirstRefresh;
- (void).cxx_destruct;
- (void)setupViews;

@end
