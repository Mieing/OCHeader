@class UIImageView, DUXPluralAvatar, AWEGradientView, AWEDanmakuContentLabel;

@interface AWEDanmakuItemPickView : AWEDanmakuItemCommonView {
    AWEDanmakuContentLabel *_contentLabel;
}

@property (retain, nonatomic) DUXPluralAvatar *prefixAvatars;
@property (retain, nonatomic) AWEGradientView *bottomGradientView;
@property (retain, nonatomic) UIImageView *rightArrowView;

- (void)updateWithDescriptor:(id)a0;
- (void)updateDanmaKuUnitView;
- (id)initWithItemViewType:(id)a0;
- (double)obtainContentLabelX;
- (void)configBottomGradientViewColorIfNeed;
- (void)updatePrefixAvatars;
- (void)updateRightArrowViewLayout;
- (void)updateContentLabel;
- (void)updateBottomGradientView;
- (void)updatePrefixAvatarsLayout;
- (void)addSubViews;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)contentLabel;

@end
