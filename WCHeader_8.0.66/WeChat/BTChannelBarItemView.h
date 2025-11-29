@class MMUILabel, MMWebImageView;

@interface BTChannelBarItemView : BTBaseBarItemView {
    MMUILabel *m_dotLabel;
    MMWebImageView *m_smallIconImageView;
}

- (void)updateViewModel:(id)a0;
- (id)channelBarItemViewModel;
- (void)initHeaderView;
- (void)updateHeaderView;
- (void)initSubtitleView;
- (void)initSmallIconView;
- (void)updateSmallIconView;
- (void)inititemSubTitleLabel;
- (void)initArrowView;
- (void)initDotImageView;
- (void)updateDotImageView;
- (void)layoutSubtitleView;
- (void)layoutDotImageView;
- (double)layoutSmallIconView;
- (void).cxx_destruct;

@end
