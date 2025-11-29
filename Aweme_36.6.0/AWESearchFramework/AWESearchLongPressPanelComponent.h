@class AWESearchEventDispather, AWESearchStandardVideoPlayerComponentModel, AWEGeneralSearchVideoCardModel, NSDictionary, NSString;
@protocol AWESearchBusinessVideoPlayerComponentProvider, AWESearchContainerProtocol, AWESearchComponentProtocol;

@interface AWESearchLongPressPanelComponent : AWESearchComponent <AWESearchLongPressPanelComponentProvider>

@property (weak, nonatomic) id<AWESearchBusinessVideoPlayerComponentProvider> businessPlayerProvider;
@property (retain, nonatomic) AWEGeneralSearchVideoCardModel *cardModel;
@property (retain, nonatomic) AWESearchStandardVideoPlayerComponentModel *playerModel;
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

+ (BOOL)useLongPressPanelComponent;

- (double)getCurrentPlaybackRate;
- (void)changeSpeedModeClick:(double)a0;
- (void)updateSearchPlayerPlaybackRate:(double)a0;
- (void)changeSpeedModeShow;
- (void)updateWithModel:(id)a0 forceUpdate:(BOOL)a1;
- (id)provideProtocol;
- (void)showNewPressPanelForScene:(id)a0 aweme:(id)a1;
- (void).cxx_destruct;

@end
