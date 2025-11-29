@class NSString, LOTAnimationView, UIImageView, UILabel, IESECLiveRedDotView, IESECLiveReplayGoodsListHeaderEntry;

@interface IESECLiveReplayGoodsListEntryItemView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) LOTAnimationView *iconLottieView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) IESECLiveRedDotView *rightTopLabel;
@property (nonatomic) long long rightTopNum;
@property (retain, nonatomic) IESECLiveReplayGoodsListHeaderEntry *itemModel;
@property (retain, nonatomic) NSString *lottieFilePath;
@property (nonatomic) struct CGPoint { double x; double y; } iconCenterPoint;

- (id)initWithEntryModel:(id)a0;
- (void)rearrangeUIStyle;
- (void)updateRightTopNum:(long long)a0 needAnim:(BOOL)a1;
- (void)addRightTopLabel;
- (void)playLottieAnimation;
- (void)updateRightTopNum:(long long)a0;
- (void).cxx_destruct;

@end
