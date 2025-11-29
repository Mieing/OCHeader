@class NSArray, NSMutableDictionary, MyWCDB, WCMicroMerchantFoldSettings, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface WCMicroMerchantFoldMgr : NSObject {
    NSObject<OS_dispatch_queue> *_dataQueue;
    NSObject<OS_dispatch_queue> *_reportSerialQueue;
}

@property (retain, nonatomic) NSMutableDictionary *unfoldedUsernameInfos;
@property (retain, nonatomic) NSArray *continueUnfoldInteractionTypes;
@property (retain, nonatomic) WCMicroMerchantFoldSettings *foldSettings;
@property (retain, nonatomic) NSMutableArray *reportInfoArr;
@property (retain, nonatomic) MyWCDB *database;

- (id)init;
- (void)resetMicroMerchantDynamicUnfoldDataIfNeeded;
- (void)asyncRecordInteractionWithDataItem:(id)a0 interactionType:(unsigned long long)a1 isFolded:(BOOL)a2 atTime:(id)a3 scene:(unsigned long long)a4;
- (void)asyncRegenerateFoldSettings;
- (BOOL)clearAllInteractionRecords;
- (id)fetchUnfoldedUsernamesAtTime:(id)a0 expiredFoldedUsernames:(id *)a1 expiredUnfoldedUsernames:(id *)a2;
- (void)_FoldingFeeds_updateUnfoldedUsernameInfosAtTime:(unsigned long long)a0 expiredUsernames:(id *)a1;
- (void)_UnfoldingFeeds_updateUnfoldedUsernameInfosAtTime:(unsigned long long)a0 expiredUsernames:(id *)a1;
- (BOOL)_UnfoldingFeeds_hasUnfoldInteractionWithUsername:(id)a0 minTime:(unsigned long long)a1 maxTime:(unsigned long long)a2;
- (void)loadUnfoldedUsernameInfos;
- (void)saveUnfoldedUsernameInfos;
- (void)asyncSaveUnfoldedUsernameInfos;
- (void)asyncReportHitRuleInteractions:(id)a0 openWSGroupInteractions:(id)a1 openWSUsernames:(id)a2 threshold:(unsigned long long)a3;
- (void)asyncReportWithFoldAgainUsernames:(id)a0;
- (id)hitRuleInteractions:(id)a0 usernames:(id)a1 threshold:(unsigned long long)a2;
- (void)onTimeLineSessionStart;
- (void)handleTimeLineSessionStart;
- (void).cxx_destruct;

@end
