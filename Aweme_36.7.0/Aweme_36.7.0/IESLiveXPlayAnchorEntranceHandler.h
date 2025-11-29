@class NSString, HTSLiveToolbarItem, HTSLiveItemBubbleInfo;

@interface IESLiveXPlayAnchorEntranceHandler : NSObject <CAAnimationDelegate, IESLiveXPlayAnchorEntranceRouter, IESLiveGuideDotBubbleHandler>

@property (copy, nonatomic) NSString *appId;
@property (nonatomic) BOOL hasInToolbar;
@property (retain, nonatomic) HTSLiveToolbarItem *toolbarItem;
@property (retain, nonatomic) HTSLiveToolbarItem *customToolbarItem;
@property (retain, nonatomic) HTSLiveToolbarItem *decorationToolbar;
@property (copy, nonatomic) id /* block */ animationCompletion;
@property (nonatomic) BOOL enablePkEntranceChange;
@property (nonatomic) BOOL enableInteractEntranceChange;
@property (retain, nonatomic) HTSLiveItemBubbleInfo *bubbleInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDIContext:(id)a0;
- (void)setupObserve;
- (void)showBubbleIfNeed;
- (void)receiveItemBubbleInfo:(id)a0;
- (void)enableInteractive;
- (void)setupEnablePkEntranceChange:(BOOL)a0 enableInteractEntranceChange:(BOOL)a1;
- (void)showEntrance:(id)a0 isInClearScreen:(BOOL)a1;
- (void)showEntrance:(id)a0 enterFrom:(id)a1 clickSchema:(id)a2;
- (void)hideEntrance:(id)a0 enterFrom:(id)a1;
- (void)hideEntrance;
- (void)playDismissAnimationOn:(id)a0 completion:(id /* block */)a1;
- (void)updateClearScreen:(BOOL)a0 isInitUpdate:(BOOL)a1;
- (id)toolbarIdentifier;
- (void)disableInteractive:(BOOL)a0;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;

@end
