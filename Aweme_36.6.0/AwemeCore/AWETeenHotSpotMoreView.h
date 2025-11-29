@class AWETeenHotSpotDataController, UIImageView, NSTimer, UIView, UILabel, AWETeenHotSpotModel;

@interface AWETeenHotSpotMoreView : UIView

@property (retain, nonatomic) AWETeenHotSpotDataController *dataController;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *flameView;
@property (retain, nonatomic) UIImageView *hotSpotIcon;
@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) UIView *splitLine;
@property (retain, nonatomic) UILabel *fadeInLabel;
@property (retain, nonatomic) UILabel *fadeOutLabel;
@property (nonatomic) long long showIndex;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) AWETeenHotSpotModel *curHotSpotModel;
@property (nonatomic) BOOL showStartMarqueeAnimation;
@property (copy, nonatomic) id /* block */ selectedBlock;

- (void)p_setupView;
- (id)initWithDataController:(id)a0;
- (void)p_setupBind;
- (void)p_startMarqueeAnimation;
- (void)p_onSingleTap;
- (void).cxx_destruct;
- (void)dealloc;

@end
