@class IESECWinGoodsObject, NSString, IESECDLEventHandler, IESECWinKOLExplanationView, IESECDLRender, IESECDLBuilder, IESECDLModel;
@protocol IESECWinFlexGoodsCellProtocol;

@interface IESECWinDynamicDoubleColumnCell : UICollectionViewCell <IESECWinProductCellProtocol>

@property (retain, nonatomic) IESECDLModel *dlModel;
@property (retain, nonatomic) IESECDLRender *render;
@property (retain, nonatomic) IESECDLBuilder *builder;
@property (retain, nonatomic) IESECWinGoodsObject *object;
@property (retain, nonatomic) IESECDLEventHandler *eventHandler;
@property (retain, nonatomic) IESECWinKOLExplanationView *KOLTagView;
@property (weak, nonatomic) id<IESECWinFlexGoodsCellProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)calcBottomHeightWithDLModel:(id)a0;
+ (double)heightOfCellWithCellWidth:(double)a0 dlModel:(id)a1 object:(id)a2;

- (id)playerContainer;
- (void)stopPlay;
- (void)startPlay;
- (id)playItem;
- (void)setHasPlayed:(BOOL)a0;
- (void)bindObject:(id)a0;
- (void)pausePlay;
- (void)clickGoodsSourceView;
- (void)clickFanCouponButtonView;
- (void)clickRecommendView;
- (void)clickGoodsCoverTagViewWithModel:(id)a0;
- (void)tagListShow:(id)a0 goodsModel:(id)a1;
- (void)clickTagList:(id)a0 goodsModel:(id)a1;
- (id)danmakuDataSource;
- (BOOL)isVoiceControllable;
- (double)maxPlayDuration;
- (void)updatePlayableDurationAndCurrentTimeWithDuration:(double)a0 currentTime:(double)a1;
- (void)addSubviewNotDynamic;
- (id)getGoodsObject;
- (void)bindObject:(id)a0 withDLModel:(id)a1;
- (void)registerPageCardEventWithCallback:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)hasPlayed;
- (void)setUpUI;

@end
