@class UIView, NSString, MMFinderLiveRewardGiftItem, MMFinderLiveTask, UIImageView, MMUIView, MMFinderLiveTaskId, MMUILabel;

@interface MMLiveRecommendGiftTipsView : MMRectTriangleArrowView <MMFinderLiveGiftResourceMgrExt>

@property (retain, nonatomic) MMFinderLiveTaskId *liveTaskId;
@property (readonly, nonatomic) MMFinderLiveTask *finderLiveTask;
@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) MMFinderLiveRewardGiftItem *giftItem;
@property (retain, nonatomic) NSString *wording;
@property (retain, nonatomic) UIImageView *thumbnailView;
@property (retain, nonatomic) MMUIView *expireDaysContainerView;
@property (retain, nonatomic) MMUILabel *expireDaysLabel;
@property (retain, nonatomic) MMUILabel *recommendWordingLabel;
@property (retain, nonatomic) MMUILabel *priceLabel;
@property (retain, nonatomic) UIImageView *coinIconView;
@property (retain, nonatomic) UIView *seperatorLine;
@property (copy, nonatomic) id /* block */ tapAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 orientation:(long long)a2;
- (void)initUI;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)removeAllSubViews;
- (double)triangeArrowWidth;
- (double)triangeArrowHeight;
- (double)selfCornerRadius;
- (id)getDefaultGiftThumbImage;
- (void)onTapGiftTipsView;
- (void)updateWithScene:(unsigned long long)a0 giftItem:(id)a1 wording:(id)a2;
- (id)currentBasicReportParams;
- (void)onLiveGiftResDownloadCompleted:(id)a0 retry:(unsigned long long)a1 totalLength:(unsigned long long)a2 resType:(long long)a3 productId:(id)a4 downloadUrl:(id)a5;
- (void).cxx_destruct;

@end
