@class AWESearchEventDispather, NSString, NSDictionary, UIView, NSMutableArray;
@protocol AWESearchComponentProtocol, AWESearchUserGuideViewProtocol, AWESearchContainerProtocol;

@interface AWESearchBusinessVideoPlayerUserGuideComponent : AWESearchComponent <AWESearchBusinessVideoPlayerUserGuideComponentProvider>

@property (weak, nonatomic) UIView<AWESearchUserGuideViewProtocol> *guideView;
@property (retain, nonatomic) NSMutableArray *receiveProtocolArray;
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

+ (BOOL)shouldShowUserGuideViewInFlow;
+ (BOOL)shouldShowUserGuide;

- (void)didBecomeActiveForReason:(unsigned long long)a0;
- (void)componentViewWillDisappear:(BOOL)a0;
- (id)receiveProtocolList;
- (void)registerSearchUserGuide;
- (id)p_context;
- (void)interactorDidClick;
- (void)playStatusButtonDidClick;
- (id)p_componentContext;
- (void).cxx_destruct;

@end
