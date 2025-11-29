@class NSDate, NSString, NSArray, BTMEvokeInfoModel, UIResponder, BTMNode, NSMutableArray;

@interface BTMPage : NSObject

@property (retain, nonatomic) NSDate *displayStartTime;
@property (nonatomic) double cpuDisplayStartTime;
@property (retain, nonatomic) NSMutableArray *nodeStorage;
@property (retain, nonatomic) NSMutableArray *pageShowWillEndHandlers;
@property (retain, nonatomic) NSMutableArray *pageShowWillEndWithExtraHandlers;
@property (retain, nonatomic) NSMutableArray *pageDidAppearHandlers;
@property (weak, nonatomic) UIResponder *responder;
@property (nonatomic) BOOL inDisplay;
@property (nonatomic) BOOL firstShow;
@property (nonatomic) BOOL enterReportFinished;
@property (weak, nonatomic) UIResponder *pageHolder;
@property (nonatomic) long long step;
@property (nonatomic) long long realStep;
@property (copy, nonatomic) NSString *showId;
@property (copy, nonatomic) NSString *instanceId;
@property (retain, nonatomic) BTMEvokeInfoModel *evokeInfoModel;
@property (retain, nonatomic) BTMNode *nextJumpNode;
@property (retain, nonatomic) BTMNode *sourceBtmTokenNodeCreateInThisDisplay;
@property (retain, nonatomic) NSMutableArray *nodeInCurrentShow;
@property (retain, nonatomic) NSArray *fromUnknownBackInfo;
@property (retain, nonatomic) NSArray *fromUnknownInfo;
@property (copy, nonatomic) NSString *responderClassName;
@property (nonatomic) BOOL willJumpToNewPage;
@property (retain, nonatomic) BTMPage *lastPageInWillAppear;
@property (nonatomic) BOOL didMarkDiaplayEnd;
@property (nonatomic) BOOL isNavagationPushOrSet;
@property (nonatomic) BOOL updateBySourceBtmTokenInThisDisplay;
@property (nonatomic) BOOL btmPreIsFromSourceBtmToken;
@property (nonatomic) BOOL isFePage;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) BOOL pageIsReAppear;
@property (nonatomic) unsigned long long tabOptimizeStatus;
@property (nonatomic) BOOL updateShowIdIfNeeded;

+ (BOOL)shouldOptimizeTabPageItem:(id)a0;

- (void)pageDisplayEnd;
- (void)associateNodeWithPage:(id)a0;
- (void)pageDidAppear;
- (void)pageShowWillEndIsBack:(BOOL)a0;
- (void)checkMultiJump;
- (void)registerPageShowWillEndHandler:(id /* block */)a0;
- (void)registerPageShowWillEndWithExtraInfoHandler:(id /* block */)a0;
- (void)registerPageDidAppearHandler:(id /* block */)a0;
- (void)markDisplayStart;
- (id)getPageShowId:(id)a0 oldShowId:(id)a1;
- (void)updateShowId;
- (void)checkBeforePageShowBegin;
- (void)checkBeforePageShowEndIsBack:(BOOL)a0;
- (void)pageWillAppear;
- (void).cxx_destruct;
- (id)init;
- (id)debugDescription;

@end
