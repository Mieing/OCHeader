@class NSString, AWEFeedPauseModalStrategyManager, AWEAwemeModel, UIView, NSDictionary, AWEFeedPauseModalBaseComponent;
@protocol AWEFeedPauseModalStyleManagerProtocol, AWEFeedPauseModalContextProtocol;

@interface AWEFeedPauseModalBaseStyle : NSObject <AWEFeedPauseModalBaseStyleProtocol>

@property (weak, nonatomic) id<AWEFeedPauseModalStyleManagerProtocol> styleManager;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) UIView *styleContainerView;
@property (weak, nonatomic) AWEFeedPauseModalStrategyManager *strategyManager;
@property (retain, nonatomic) AWEFeedPauseModalBaseComponent *currentActiveComponent;
@property (copy, nonatomic) NSDictionary *styleComponentConfig;
@property (retain, nonatomic) id<AWEFeedPauseModalContextProtocol> context;
@property (nonatomic) BOOL isStyleShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)shouldShowWithModel:(id)a0 styleConfig:(id)a1 strategyManager:(id)a2;
+ (id)optionalBusinessComponent:(id)a0;

- (unsigned long long)pauseModalBizType;
- (void)activeComponentWithClass:(Class)a0 model:(id)a1;
- (void)layoutContainerView:(id)a0 cellViewController:(id)a1;
- (void)deallocStyleWithModel:(id)a0 cellViewController:(id)a1 clickMethod:(id)a2;
- (void)hiddenStyleWithModel:(id)a0 clickMethod:(id)a1;
- (long long)pauseModalStyleSlotType;
- (BOOL)enableFrequencyCheck;
- (BOOL)isBottomBarStyle;
- (BOOL)isBottomTabStyle;
- (BOOL)conflictCheck;
- (id)pauseContentWithModel:(id)a0;
- (void).cxx_destruct;

@end
