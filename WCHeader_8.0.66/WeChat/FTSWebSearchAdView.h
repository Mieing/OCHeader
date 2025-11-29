@class FTSWebSearchAdInfo, UIImageView, UILabel, UIView;
@protocol FTSWebSearchAdViewDelegate;

@interface FTSWebSearchAdView : UIView

@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIView *adInfoContainerView;
@property (retain, nonatomic) UIView *adHintContainerView;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) FTSWebSearchAdInfo *adInfo;
@property (weak, nonatomic) id<FTSWebSearchAdViewDelegate> delegate;

- (id)initWithAdInfo:(id)a0 delegate:(id)a1;
- (void)setupView;
- (void)onTapAdItem;
- (void)onTapHint;
- (void).cxx_destruct;

@end
