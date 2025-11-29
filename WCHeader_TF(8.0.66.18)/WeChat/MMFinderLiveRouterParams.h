@class NSString, NSArray, MMLivePivotFlowSharedData, NSMutableDictionary, MMFinderLiveRelatedLiveParams, MMFinderLiveContentVM, UIViewController, MMLiveAdsParams;

@interface MMFinderLiveRouterParams : NSObject

@property (nonatomic) unsigned long long routerType;
@property (retain, nonatomic) UIViewController *fromVC;
@property (retain, nonatomic) MMFinderLiveContentVM *contactVM;
@property (retain, nonatomic) NSArray *allContentVMs;
@property (nonatomic) long long tabType;
@property (nonatomic) int commentScene;
@property (nonatomic) int entryScene;
@property (nonatomic) int entryCardType;
@property (nonatomic) unsigned long long selectIndex;
@property (nonatomic) BOOL fromNotFinder;
@property (retain, nonatomic) NSArray *exportIds;
@property (retain, nonatomic) NSMutableDictionary *customParams;
@property (readonly, nonatomic) MMFinderLiveContentVM *selectedContentVm;
@property (retain, nonatomic) MMFinderLiveRelatedLiveParams *relatedLiveParams;
@property (retain, nonatomic) MMLiveAdsParams *liveAdsParams;
@property (retain, nonatomic) NSString *replayEntryType;
@property (retain, nonatomic) NSString *feedID;
@property (retain, nonatomic) NSString *gameClientParams;
@property (retain, nonatomic) MMLivePivotFlowSharedData *pivotFlowData;
@property (nonatomic) BOOL disableInteractiveToMinimizeWindow;
@property (nonatomic) BOOL useAnchoredBypass;
@property (nonatomic) BOOL disableHistoryLives;
@property (nonatomic) BOOL useVerticalFullscreenMinimization;

+ (id)builder;
+ (id)defaultParamsFromVC:(id)a0 contact:(id)a1;
+ (id)defaultParamsFromVC:(id)a0 contactVM:(id)a1;
+ (id)defaultParamsFromVC:(id)a0 dataItem:(id)a1;
+ (id)defaultParamsFromVC:(id)a0 dataItem:(id)a1 sessionExtraKey:(id)a2;
+ (id)defaultParamsFromVC:(id)a0 contentVM:(id)a1;

- (id)description;
- (id)init;
- (id)initWithFromVC:(id)a0 contactVM:(id)a1 customParams:(id)a2 tabType:(long long)a3 fromNotFinder:(BOOL)a4 commentScene:(int)a5 entryScene:(int)a6 entryCardType:(int)a7;
- (id)initWithFromVC:(id)a0 allContentVMs:(id)a1 selectIndex:(unsigned long long)a2 tabType:(long long)a3 fromNotFinder:(BOOL)a4 commentScene:(int)a5 entryScene:(int)a6 entryCardType:(int)a7 replayEntryType:(id)a8 withByPass:(BOOL)a9 enableScroll:(BOOL)a10 exportIds:(id)a11;
- (BOOL)haveExtraParams;
- (void).cxx_destruct;

@end
