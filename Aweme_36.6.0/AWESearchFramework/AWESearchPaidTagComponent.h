@class AWESearchEventDispather, AWESearchPaidTagComponentModel, NSDictionary, NSString, UILabel, UIView, NSMutableArray;
@protocol AWESearchComponentProtocol, AWESearchContainerProtocol, AWESearchStandardVideoPlayerComponentProvider;

@interface AWESearchPaidTagComponent : AWESearchComponent <AWESearchPaidTagComponentProvider>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UILabel *paidLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) AWESearchPaidTagComponentModel *model;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) long long lastRemainTime;
@property (nonatomic) double currentTime;
@property (retain, nonatomic) NSMutableArray *receiveProtocolArray;
@property (weak, nonatomic) id<AWESearchStandardVideoPlayerComponentProvider> playerProvider;
@property (retain, nonatomic) AWESearchEventDispather *eventDispather;
@property (weak, nonatomic) id<AWESearchContainerProtocol> containerContext;
@property (weak, nonatomic) id<AWESearchComponentProtocol> componentContext;
@property (copy, nonatomic) NSDictionary *dictLogExtraInfo;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) BOOL hidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })componentSizeForModel:(id)a0 width:(double)a1;
+ (struct CGSize { double x0; double x1; })p_calculateComponentSize:(double)a0 withModel:(id)a1;
+ (id)getDescWithRemainTime:(long long)a0 paidTagModel:(id)a1;

- (void)updateStartTime:(double)a0 endTime:(double)a1;
- (void)updateCurrentTime:(double)a0;
- (void)playerPlayTime:(double)a0 canPlayTime:(double)a1 totalTime:(double)a2;
- (void)componentDidLoad;
- (void)updateWithModel:(id)a0 forceUpdate:(BOOL)a1;
- (void)componentViewLayoutSubviews;
- (id)provideProtocol;
- (id)receiveProtocolList;
- (void)updateRemainTime:(long long)a0;
- (void)updatePlayerCompleteWithPlayState:(long long)a0 playedDuration:(double)a1 totalDuration:(double)a2 model:(id)a3;
- (void)p_updateWithModel:(id)a0 forceUpdate:(BOOL)a1;
- (void).cxx_destruct;
- (id)componentView;

@end
