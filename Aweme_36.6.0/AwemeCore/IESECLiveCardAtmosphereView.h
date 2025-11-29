@class IESECLiveContext, UIView, NSDictionary, IESECLiveHotSaleView, NSMutableArray, IESECLiveTracker, IESECGCDTimer, UIViewController, IESECLiveAtmosphereView;
@protocol IESECLiveCardAtmosphereView;

@interface IESECLiveCardAtmosphereView : UIView

@property (weak, nonatomic) IESECLiveContext *liveContext;
@property (weak, nonatomic) IESECLiveTracker *tracker;
@property (retain, nonatomic) NSDictionary *trackParams;
@property (retain, nonatomic) IESECLiveHotSaleView *hotSaleView;
@property (retain, nonatomic) IESECLiveAtmosphereView *atmosphereView;
@property (retain, nonatomic) NSMutableArray *atmosphereInfoArray;
@property (retain, nonatomic) UIView<IESECLiveCardAtmosphereView> *atmosphereShowingView;
@property (retain, nonatomic) IESECGCDTimer *atmosphereTimer;
@property (retain, nonatomic) UIViewController *btmHost;

- (void)appendModels:(id)a0;
- (void)appendModel:(id)a0;
- (void)cancelAtmosphereTimerIfNeeded;
- (void)appendModel:(id)a0 immediately:(BOOL)a1;
- (void)appendModel:(id)a0 immediately:(BOOL)a1 removeExistData:(BOOL)a2;
- (void)startShowAtmosphere;
- (id)getAtmosphereViewForData:(id)a0;
- (id)getAtmosphereBizModelWithData:(id)a0;
- (void)setupAtmosphereLoopTimerWithDuration:(double)a0;
- (void)trackAtmosphereWithModel:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 liveContext:(id)a1 trackParams:(id)a2;
- (void)appendWithHotSaleModel:(id)a0 atmosphereModels:(id)a1;
- (void)setHotSaleStyleWithModel:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setupUI;

@end
