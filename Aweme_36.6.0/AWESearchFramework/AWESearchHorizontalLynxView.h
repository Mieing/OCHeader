@class AWESearchAutoPlayHandler, NSString, NSDictionary, AWESearchDynamicEngine;

@interface AWESearchHorizontalLynxView : UIView <AWESearchDynamicEngineDelegate, AWESearchHorizontalViewCellProtocol, AWESearchAutoPlayCardProtocol>

@property (retain, nonatomic) AWESearchDynamicEngine *lynxEngine;
@property (nonatomic) BOOL hasBinded;
@property (nonatomic) BOOL hasPlayed;
@property (nonatomic) BOOL hasEnded;
@property (nonatomic) double startTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) long long index;
@property (nonatomic) long long awemeIndex;
@property (copy, nonatomic) id /* block */ cellDidBecomeActive;
@property (copy, nonatomic) id /* block */ cellDidResignActive;
@property (nonatomic) BOOL isActive;
@property (weak, nonatomic) AWESearchAutoPlayHandler *autoPlayHandler;

+ (id)reuseIdentiferWithModel:(id)a0;
+ (struct CGSize { double x0; double x1; })horizontalCellSizeWithModel:(id)a0 width:(double)a1;

- (id)awemeModel;
- (id)liveTransitionContext;
- (void)cellWillDisplay;
- (void)cellDidEndDisplay;
- (void)lynxEngine:(id)a0 viewDidChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)viewWillDisAppear;
- (void)horizontalDidDisplay;
- (void)horizontalDidEndDisplay;
- (void)registerCallback:(id /* block */)a0 forReachingPlaybackTime:(double)a1;
- (void)updateDataContainerWidth:(id)a0;
- (void)lynxEngineSearchLynxElementDidBecomeActive:(id)a0;
- (void)lynxEngineSearchLynxElementDidResignActive:(id)a0;
- (id)initWithModel:(id)a0 preferWidth:(double)a1;
- (void)trackBindEvent;
- (void)trackPlayEvent;
- (void)trackEndEvent;
- (void)viewDidAppear;
- (void)didBecomeActive;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)transitionContext;
- (void)didResignActive;
- (void)layoutSubviews;
- (id)activeView;
- (void)updateModel:(id)a0;

@end
