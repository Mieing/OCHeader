@class NSString, NSMutableDictionary, AWEFeedPauseModalBoundedDictionary, AWEFeedPauseModalStrategyManager, NSMutableArray;
@protocol AWEFeedPauseModalContextProtocol;

@interface AWEFeedPauseModalStyleManager : NSObject <AWEFeedPauseModalStyleManagerProtocol>

@property (retain, nonatomic) NSMutableDictionary *styleContainer;
@property (retain, nonatomic) NSMutableDictionary *styleClassContainer;
@property (retain, nonatomic) AWEFeedPauseModalBoundedDictionary *styleContainerBoundedDictionary;
@property (retain, nonatomic) AWEFeedPauseModalBoundedDictionary *styleClassContainerBoundedDictionary;
@property (retain, nonatomic) NSMutableDictionary *styleShowStatusDic;
@property (retain, nonatomic) NSMutableDictionary *allStyleShowStatusDic;
@property (retain, nonatomic) NSString *btnType;
@property (retain, nonatomic) NSString *pauseContent;
@property (retain, nonatomic) NSMutableArray *bizTypeArray;
@property (retain, nonatomic) NSMutableArray *typeArray;
@property (retain, nonatomic) NSMutableArray *contentArray;
@property (retain, nonatomic) id<AWEFeedPauseModalContextProtocol> context;
@property (weak, nonatomic) AWEFeedPauseModalStrategyManager *strategyManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackerParamsForFeedPauseButtonShow:(id)a0;
- (id)trackerParamsForFeedPauseButtonClose:(id)a0;
- (id)trackerParamsForFeedPauseButtonClick:(id)a0;
- (id)trackerParamsForFeedPauseButton:(id)a0;
- (void)deallocStyleWithModel:(id)a0 cellViewController:(id)a1 clickMethod:(id)a2;
- (void)hiddenStyleWithModel:(id)a0 clickMethod:(id)a1;
- (void)hiddenBottomTabIfNeedWithModel:(id)a0;
- (void)showBottomTabIfNeedWithModel:(id)a0;
- (void)trackFalseTouchIfNeedWithAweme:(id)a0;
- (void)hiddenStyleTypeAtSlot:(long long)a0 model:(id)a1 clickMethod:(id)a2;
- (void)createStyleWithModel:(id)a0;
- (void)showStyleWithModel:(id)a0 cellViewController:(id)a1;
- (BOOL)shouldShowPauseModalIntro:(id)a0;
- (void)createStyleWithModel:(id)a0 classArray:(id)a1 style:(id)a2;
- (id)getStyleArray:(id)a0;
- (id)getStyleClassArray:(id)a0;
- (void)addStyleClass:(Class)a0 model:(id)a1;
- (void)addStyle:(id)a0 model:(id)a1;
- (void)trackerForPauseModalClose:(id)a0 clickMethod:(id)a1;
- (void)trackerForPauseModalShow:(id)a0;
- (BOOL)enableBoundedDataStruct;
- (BOOL)enableMediaPlayer;
- (id)trackerCommonParamsForPauseModal:(id)a0;
- (void)trackerForPauseModalClick:(id)a0 pauseContent:(id)a1 btnType:(unsigned long long)a2;
- (id)getCurrentMediaCurrentFrame;
- (void).cxx_destruct;
- (void)removeStyle:(id)a0;

@end
