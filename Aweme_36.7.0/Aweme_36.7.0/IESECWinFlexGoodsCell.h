@class NSString, IESECWinGoodsObject, IESECLLView;
@protocol IESECWinFlexGoodsCellProtocol;

@interface IESECWinFlexGoodsCell : UICollectionViewCell <IESECWinProductCellProtocol> {
    IESECWinGoodsObject *_object;
}

@property (retain, nonatomic) IESECLLView *llView;
@property (weak, nonatomic) id<IESECWinFlexGoodsCellProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id /* block */)cellBuilderWithObject:(id)a0;
+ (double)heightWithObject:(id)a0;
+ (id /* block */)cellBuilderWithObjectForLowPrice:(id)a0;

- (id)playerContainer;
- (void)stopPlay;
- (void)startPlay;
- (id)playItem;
- (void)setHasPlayed:(BOOL)a0;
- (void)pausePlay;
- (void)bindObject:(id)a0;
- (void)clickGoodsSourceView;
- (void)clickFanCouponButtonView;
- (void)clickSelfBuying;
- (void)clickRecommendView;
- (void)clickGoodsCoverTagViewWithModel:(id)a0;
- (void)tagListShow:(id)a0 goodsModel:(id)a1;
- (void)clickTagList:(id)a0 goodsModel:(id)a1;
- (id)danmakuDataSource;
- (BOOL)isVoiceControllable;
- (double)maxPlayDuration;
- (void)updatePlayableDurationAndCurrentTimeWithDuration:(double)a0 currentTime:(double)a1;
- (id)getGoodsObject;
- (void)animateWithUpdatedObject;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)hasPlayed;

@end
