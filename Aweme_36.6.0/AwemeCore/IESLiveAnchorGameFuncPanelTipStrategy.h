@class HTSEventContext, UIImageView, IESLiveCountTimer, UIView, NSMutableArray;
@protocol IESLiveBubbleGuide, IESLiveWebPPlayer;

@interface IESLiveAnchorGameFuncPanelTipStrategy : NSObject

@property (retain, nonatomic) NSMutableArray *processedScene;
@property (retain, nonatomic) UIView *toolbarCustomView;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *webpImageView;
@property (retain, nonatomic) UIView<IESLiveBubbleGuide> *tipView;
@property (retain, nonatomic) IESLiveCountTimer *bubbleTimer;
@property (retain, nonatomic) IESLiveCountTimer *breathLightTimer;
@property (nonatomic) BOOL isFromGuideActivity;
@property (retain, nonatomic) HTSEventContext *trackContext;

- (id)initWithComponentContext:(id)a0 trackContext:(id)a1;
- (void)processTapToolbarGameEntranceWithGameModels:(id)a0;
- (void)processGameItemTipWithGameModels:(id)a0;
- (void)pr_stopShowTipTaskInToolbarGameEntrance;
- (void)pr_processGameItemTipWithGameModels:(id)a0;
- (BOOL)pr_processValidPeriodConfig:(id)a0 withGameStoreKey:(id)a1 withTapStoreKey:(id)a2;
- (void)pr_showBubbleInToolbarGameEntrance:(id)a0;
- (void)pr_processedTipToUpdateStoreData:(id)a0;
- (void)pr_startAnimationInToolbarGameEntrance;
- (void)pr_stopAnimationInToolbarGameEntrance;
- (void)pr_removeBubbleInToolbarGameEntrance;
- (void).cxx_destruct;
- (void)dealloc;

@end
