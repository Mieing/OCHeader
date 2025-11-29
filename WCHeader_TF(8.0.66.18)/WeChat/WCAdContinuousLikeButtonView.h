@class WCDataItem, WCAdURLImageView, WCAdSocialLikeLogic, MMUIView, WCAdContinuousLikeButtonInfo, MMUILabel;

@interface WCAdContinuousLikeButtonView : MMUIButton

@property (retain, nonatomic) WCAdContinuousLikeButtonInfo *buttonInfo;
@property (retain, nonatomic) WCDataItem *dataItem;
@property (nonatomic) unsigned long long contentItemScene;
@property (nonatomic) double maxViewWidth;
@property (nonatomic) double viewHeight;
@property (nonatomic) BOOL forTransformAnimation;
@property (retain, nonatomic) MMUIView *bgView;
@property (retain, nonatomic) MMUIView *bgViewShadow;
@property (retain, nonatomic) MMUILabel *titleView;
@property (retain, nonatomic) WCAdURLImageView *iconView;
@property (retain, nonatomic) MMUIView *adMaskView;
@property (readonly, nonatomic) WCAdSocialLikeLogic *socialLikeLogic;

- (id)initWithContinuousLikeButtonInfo:(id)a0 dataItem:(id)a1 contentItemScene:(unsigned long long)a2 maxViewWidth:(double)a3 viewHeight:(double)a4 forTransformAnimation:(BOOL)a5;
- (void)dealloc;
- (void)initView;
- (void)startBreathingAnimation;
- (void)stopBreathingAnimation;
- (void)addButtonEvent;
- (void)onButtonClick:(id)a0;
- (void)onButtonTouchDown:(id)a0;
- (void)onButtonTouchUp:(id)a0;
- (void)resetButtonState;
- (id)fetchContinuousLikeReportInfo;
- (void).cxx_destruct;

@end
