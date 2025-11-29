@class AWESearchEventDispather, NSString, NSDictionary, UIView, NSMutableArray;
@protocol AWESearchContainerProtocol, AWESearchComponentProtocol;

@interface AWESearchProgressBarComponent : AWESearchComponent <AWESearchProgressBarComponentProvider>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *progressView;
@property (retain, nonatomic) NSMutableArray *receiveProtocolArray;
@property (nonatomic) double progress;
@property (nonatomic) double lastPlayDuration;
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

- (void)playerPlayTime:(double)a0 canPlayTime:(double)a1 totalTime:(double)a2;
- (void)componentDidLoad;
- (void)componentViewLayoutSubviews;
- (id)provideProtocol;
- (id)receiveProtocolList;
- (void)updatePlayerCompleteWithPlayState:(long long)a0 playedDuration:(double)a1 totalDuration:(double)a2 model:(id)a3;
- (void)updateProgressBarComponentProgressWithPlayTime:(double)a0 totalTime:(double)a1;
- (void).cxx_destruct;
- (id)componentView;

@end
