@class UIView, NSString, IESECWinGoodsTitleLabel, IESECWinVideoDurationView, UIImageView, IESECStoreGoodsRecommendInfoView, IESECWinVideoProductObject, IESECGoodsPriceLabel;
@protocol IESECWinVideoProductCellDelegate;

@interface IESECWinVideoProductSingleColumnCell : UICollectionViewCell <IESECRelationInlineProtocol> {
    IESECWinVideoProductObject *_object;
}

@property (retain, nonatomic) UIImageView *videoCover;
@property (retain, nonatomic) UIView *videoContainer;
@property (retain, nonatomic) IESECWinVideoDurationView *duration;
@property (retain, nonatomic) UIImageView *playIconView;
@property (retain, nonatomic) IESECWinGoodsTitleLabel *contentTitle;
@property (retain, nonatomic) UIView *productContainer;
@property (retain, nonatomic) UIImageView *productCover;
@property (retain, nonatomic) UIView *productCoverMask;
@property (retain, nonatomic) IESECWinGoodsTitleLabel *productTitle;
@property (retain, nonatomic) IESECStoreGoodsRecommendInfoView *recommendView;
@property (retain, nonatomic) IESECGoodsPriceLabel *priceLabel;
@property (retain, nonatomic) id<IESECWinVideoProductCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)playerContainer;
- (void)stopPlay;
- (void)startPlay;
- (id)playItem;
- (void)pausePlay;
- (void)bindObject:(id)a0;
- (BOOL)isDanmakuEnable;
- (id)danmakuDataSource;
- (BOOL)isVoiceControllable;
- (void)updatePlayableDurationAndCurrentTimeWithDuration:(double)a0 currentTime:(double)a1;
- (void)updateDurationView;
- (void)clickProductArea;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpConstraints;
- (void)setUpUI;

@end
