@class IESECLiveReplayCardModel, IESECPlaybackGoodsCardView, NSString;
@protocol IESECPlaybackGoodsCardViewDelegate;

@interface IESECPlaybackGoodsCardListCell : UICollectionViewCell <IESECPlaybackGoodsCardViewDelegate>

@property (retain, nonatomic) IESECPlaybackGoodsCardView *card;
@property (retain, nonatomic) IESECLiveReplayCardModel *cardModel;
@property (weak, nonatomic) id<IESECPlaybackGoodsCardViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identity;

- (void)shrink;
- (void)updateDataSource:(id)a0;
- (BOOL)isFromGoodsDetail;
- (BOOL)currentVideoHasSubtitleInfo;
- (void)showViewInParent:(id)a0;
- (void)expandWithAnimation:(BOOL)a0;
- (void)infoViewClicked;
- (BOOL)cardUseMultiMode;
- (long long)isFirstLocatedCardWithGoodsIndex:(long long)a0;
- (void)updateModel:(id)a0 withIndex:(long long)a1;
- (void).cxx_destruct;
- (void)goBack;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
