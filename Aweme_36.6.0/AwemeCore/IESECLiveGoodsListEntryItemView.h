@class NSString, IESECLiveContext, LOTAnimationView, UIImageView, UILabel, IESECLiveRedDotView, IESECLiveGoodsListEntryItemModel;

@interface IESECLiveGoodsListEntryItemView : UIView

@property (retain, nonatomic) IESECLiveContext *liveContext;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) LOTAnimationView *iconLottieView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) IESECLiveRedDotView *rightTopLabel;
@property (nonatomic) long long rightTopNum;
@property (readonly, nonatomic) IESECLiveGoodsListEntryItemModel *itemModel;
@property (retain, nonatomic) NSString *lottieFilePath;
@property (nonatomic) struct CGPoint { double x; double y; } iconCenterPoint;

- (void)setItemModel:(id)a0;
- (id)uiConfigStore;
- (id)initWithEntryModel:(id)a0 liveContext:(id)a1;
- (void)rearrangeUIStyle;
- (void)updateRightTopNum:(long long)a0 needAnim:(BOOL)a1;
- (void)addRightTopLabel;
- (void)getLottieJsonWithFilePath:(id)a0 completed:(id /* block */)a1;
- (id)iconLottieViewWithFilePath:(id)a0;
- (void)playLottieAnimation;
- (void)updateRightTopNum:(long long)a0;
- (void).cxx_destruct;

@end
