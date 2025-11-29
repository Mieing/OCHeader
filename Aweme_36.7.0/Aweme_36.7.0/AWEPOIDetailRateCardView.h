@class AWEPOIDetailSkinConfig, NSArray, AWEPOIRepeatBackgroundView, AWEPOIDetailProductItemRateCard, UILabel, AWEPOIUGCRateFiveStarView;

@interface AWEPOIDetailRateCardView : UIView

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) NSArray *gradeViewArray;
@property (retain, nonatomic) AWEPOIUGCRateFiveStarView *fiveStarView;
@property (retain, nonatomic) AWEPOIDetailProductItemRateCard *model;
@property (copy, nonatomic) id /* block */ showModalWithTag;
@property (copy, nonatomic) id /* block */ onClose;
@property (retain, nonatomic) AWEPOIDetailSkinConfig *skinConfig;
@property (retain, nonatomic) AWEPOIRepeatBackgroundView *textureBackgroundView;

- (void)updateSkinConfig:(id)a0;
- (void)onTapClose;
- (id)initWithPadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)updateWithTagModel:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;

@end
