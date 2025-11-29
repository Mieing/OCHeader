@class NSString, NSMutableArray, AWESearchActionRecordManager;

@interface AWESearchStayTimeStatisticsUtility : NSObject

@property (nonatomic) unsigned long long currentStatisticsStageType;
@property (nonatomic) unsigned long long currentStayResultType;
@property (nonatomic) unsigned long long currentStayMiddleType;
@property (nonatomic) double currentStayTimeStamp;
@property (nonatomic) double currentStayMiddleTimeStamp;
@property (nonatomic) double currentKeyBoardShowTimeStamp;
@property (nonatomic) double currentInputFirstSugStamp;
@property (nonatomic) unsigned long long currentLeaveResultType;
@property (nonatomic) double currentLeaveTimeStamp;
@property (copy, nonatomic) NSString *firstSearchViewControllerIdentifier;
@property (retain, nonatomic) NSMutableArray *searchViewControllerStack;
@property (retain, nonatomic) NSString *searchId;
@property (retain, nonatomic) NSString *searchKeyword;
@property (retain, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) NSString *groupId;
@property (nonatomic) BOOL keyBoardIsVidible;
@property (nonatomic) BOOL trackKeyBoardShowTime;
@property (nonatomic) BOOL trackInputTime;
@property (retain, nonatomic) AWESearchActionRecordManager *searchActionRecordManager;
@property (nonatomic) double currentHomePageSearchLeaveTimeStamp;
@property (nonatomic) double currentHomePageSearchStayTimeStamp;

+ (id)shareInstance;

- (void)searchResultStayTimeTriggerWithType:(unsigned long long)a0 searchId:(id)a1 searchKeyword:(id)a2;
- (void)searchResultStayTimeFinishWithType:(unsigned long long)a0 searchId:(id)a1 searchKeyword:(id)a2 enterFrom:(id)a3 enterMethod:(id)a4 groupID:(id)a5;
- (void)newSearchType:(unsigned long long)a0 searchId:(id)a1 searchKeyword:(id)a2 enterFrom:(id)a3 enterMethod:(id)a4 groupID:(id)a5;
- (void)windowDidResignKeyNotification:(id)a0;
- (void)windowDidBecomeKeyNotification:(id)a0;
- (void)destory;
- (void)searchResultLeaveTimeFinishWithType:(unsigned long long)a0 searchId:(id)a1 searchKeyword:(id)a2 enterFrom:(id)a3 enterMethod:(id)a4 groupID:(id)a5;
- (void)searchResultLeaveTimeTriggerWithType:(unsigned long long)a0 searchId:(id)a1 searchKeyword:(id)a2 enterFrom:(id)a3 enterMethod:(id)a4 groupID:(id)a5;
- (void)homaPageSearchResultStayTimeTriggerWithSearchId:(id)a0 enterFrom:(id)a1 enterMethod:(id)a2 searchKeyword:(id)a3;
- (void)homaPageSearchResultLeaveTimeFinishWithSearchId:(id)a0 enterFrom:(id)a1 enterMethod:(id)a2 searchKeyword:(id)a3;
- (void)homaPageSearchResultStayTimeFinishWithSearchId:(id)a0 enterFrom:(id)a1 enterMethod:(id)a2 searchKeyword:(id)a3;
- (void)homaPageSearchResultLeaveTimeTriggerWithSearchId:(id)a0 enterFrom:(id)a1 enterMethod:(id)a2 searchKeyword:(id)a3;
- (void)searchResultStayTimeFinishWithType:(unsigned long long)a0 searchId:(id)a1 searchKeyword:(id)a2 enterFrom:(id)a3 enterMethod:(id)a4 groupID:(id)a5 logExtra:(id)a6;
- (void)searchMiddleStayTimeFinishWithType:(unsigned long long)a0 isSearch:(long long)a1 searchKeyword:(id)a2 enterMethod:(id)a3 sugSessionID:(id)a4 rawQuery:(id)a5;
- (void)searchMiddleStayTimeTriggerWithType:(unsigned long long)a0 enterFrom:(id)a1 groupID:(id)a2;
- (void)trackSearchSessionEndIfNeededWithMethodType:(id)a0;
- (BOOL)checkSearchIdIsFromTopSearchViewController:(id)a0;
- (void)updateSearchType:(unsigned long long)a0 searchId:(id)a1 searchKeyword:(id)a2 enterFrom:(id)a3 enterMethod:(id)a4 groupID:(id)a5;
- (void)updateTopSearchViewControllerWithSearchId:(id)a0;
- (void)searchResultLeaveTimeFinishWithType:(unsigned long long)a0 searchId:(id)a1 searchKeyword:(id)a2 enterFrom:(id)a3 enterMethod:(id)a4 groupID:(id)a5 logExtra:(id)a6;
- (BOOL)enableSearchSessionEndTrack;
- (void)registSearchViewController:(id)a0;
- (void)destorySearchViewController:(id)a0;
- (void)searchMiddleKeyBoardShow;
- (void)searchMiddleInputFirstSug;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive;
- (void)keyboardWillShow:(id)a0;
- (id)init;
- (void)applicationWillResignActive;
- (void)keyboardWillHide:(id)a0;
- (void)dealloc;
- (void)applicationWillTerminate:(id)a0;
- (void)addObservers;

@end
