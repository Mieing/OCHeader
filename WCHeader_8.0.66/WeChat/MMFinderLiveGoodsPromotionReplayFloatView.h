@class FinderWindowProductImgButtonInfo, UIImageView, UIView, MMUILabel;

@interface MMFinderLiveGoodsPromotionReplayFloatView : MMUIButton

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) MMUILabel *descriptionLabel;
@property (retain, nonatomic) UIView *curMaskView;
@property (retain, nonatomic) FinderWindowProductImgButtonInfo *imageButtonStatus;
@property (nonatomic) unsigned long long uiType;
@property (copy, nonatomic) id /* block */ replayFloatViewDidClickedBlock;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initViews;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)updateWithImageButtonStatus:(id)a0;
- (int)status;
- (void)onTapInside:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
