@class NSData, NSString, NSArray, WCFinderRedDotCtrlInfo, WCFinderPostSessionModel, NSMutableArray, FinderCommByPass, UIViewController, WCFinderAppendTabDatasModel;

@interface WCFinderOpenTimelineParams : NSObject

@property (nonatomic) int entryScene;
@property (nonatomic) int entryCardType;
@property (weak, nonatomic) UIViewController *fromVC;
@property (retain, nonatomic) WCFinderPostSessionModel *postSession;
@property (nonatomic) unsigned long long forceJumpTabType;
@property (nonatomic) BOOL isTriggerByUser;
@property (nonatomic) unsigned long long guideBarObjectId;
@property (nonatomic) BOOL shouldReloadTableView;
@property (copy, nonatomic) NSString *reportInfo;
@property (retain, nonatomic) NSMutableArray *topObjects;
@property (retain, nonatomic) FinderCommByPass *commByPass;
@property (nonatomic) unsigned long long demotionFlag;
@property (nonatomic) BOOL byPush;
@property (nonatomic) int failReturnTo;
@property (copy, nonatomic) id /* block */ complete;
@property (nonatomic) unsigned long long filterRedDotFlag;
@property (retain, nonatomic) NSArray *appendContentVMArray;
@property (copy, nonatomic) NSString *scrollToFeedId;
@property (retain, nonatomic) NSData *appendCardLastBuffer;
@property (copy, nonatomic) NSString *taskID;
@property (nonatomic) unsigned long long pushLevel;
@property (retain, nonatomic) WCFinderAppendTabDatasModel *appendTabDatasModel;
@property (nonatomic) unsigned long long appendDatasScene;
@property (copy, nonatomic) NSString *bottomSnackTips;
@property (nonatomic) long long openFinderTLAppendAction;
@property (retain, nonatomic) WCFinderRedDotCtrlInfo *finderEntryRedDotCtrlInfo;
@property (retain, nonatomic) WCFinderRedDotCtrlInfo *finderEntryJumpRedDotCtrlInfo;
@property (copy, nonatomic) NSString *h5ByPass;
@property (nonatomic) BOOL fromWxSns;
@property (nonatomic) BOOL showMainView;
@property (nonatomic) long long clearRedDotActionType;
@property (copy, nonatomic) NSString *jumpInfo;
@property (copy, nonatomic) NSString *tid;
@property (copy, nonatomic) NSString *nonceID;
@property (nonatomic) double playPosition;
@property (nonatomic) BOOL fromShareType;
@property (nonatomic) unsigned long long requestScene;
@property (nonatomic) BOOL showDidOpenFindEntryPanelSheet;
@property (copy, nonatomic) NSString *redDotTipsUuid;
@property (retain, nonatomic) WCFinderRedDotCtrlInfo *guideRedDotCtrlInfo;
@property (retain, nonatomic) WCFinderRedDotCtrlInfo *finderEntranceRedDotCtrlInfo;
@property (nonatomic) BOOL redDotShowOnFinderMentionEntry;
@property (nonatomic) BOOL notUpdateContextId;

- (id)_initWithEntryScene:(int)a0 entryCardType:(int)a1;
- (id)initFromOpenBusinessSceneWithPostSession:(id)a0;
- (id)initFromShareListWithDatasModel:(id)a0 entryScene:(int)a1 entryCardType:(int)a2;
- (id)initFromWXSearchShouldReloadTableView:(BOOL)a0 fromVC:(id)a1;
- (id)initFromShareListFromVC:(id)a0 shouldReloadTableView:(BOOL)a1 forceJumpTabType:(unsigned long long)a2 entryScene:(int)a3 entryCardType:(int)a4;
- (id)initFromShareListFromVC:(id)a0 shouldReloadTableView:(BOOL)a1 forceJumpTabType:(unsigned long long)a2 entryScene:(int)a3 entryCardType:(int)a4 guideBarObjectId:(unsigned long long)a5;
- (id)initFromShareListFromVC:(id)a0 shouldReloadTableView:(BOOL)a1 forceJumpTabType:(unsigned long long)a2 entryScene:(int)a3 entryCardType:(int)a4 appendContentVMArray:(id)a5 scrollToFeedId:(id)a6 appendCardLastBuffer:(id)a7 appendDatasScene:(unsigned long long)a8;
- (id)initFromPushWithFromVC:(id)a0 shouldReloadTableView:(BOOL)a1 forceJumpTabType:(unsigned long long)a2 topObjects:(id)a3 commByPass:(id)a4 demotionFlag:(unsigned long long)a5 failReturnTo:(int)a6 taskID:(id)a7 pushLevel:(unsigned long long)a8 jumpInfo:(id)a9;
- (id)initFromFindPageClick;
- (id)initFromIntroductionMessage;
- (id)initFromSnsTimelineJumpToFinderPersonalCenter;
- (id)initFromShareTypeWithTid:(id)a0 nonceID:(id)a1 playPosition:(double)a2 entryScene:(int)a3 requestScene:(unsigned long long)a4;
- (id)initFromOpenFinderTLJSApiWithFromVC:(id)a0 forceJumpTabType:(unsigned long long)a1 entryScene:(int)a2 entryCardType:(int)a3 h5ByPass:(id)a4 reportInfo:(id)a5 complete:(id /* block */)a6;
- (long long)getOpenFinderAppendAction;
- (BOOL)forceInitFinderTimelineVC;
- (id)initByEntryScene:(int)a0 entryCardType:(int)a1 appendTabDatasModel:(id)a2;
- (void)appendShowBottomSnackTipsAction:(id)a0;
- (void).cxx_destruct;

@end
