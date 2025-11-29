@class NSNumber, NSString, NSMutableSet, WCStoryDataItem, NSMutableArray, NSIndexPath;

@interface WCStoryPreviewReportObj : NSObject

@property (retain, nonatomic) NSMutableSet *allUserNameSet;
@property (retain, nonatomic) NSMutableSet *mmContactUserNameSet;
@property (retain, nonatomic) NSMutableSet *allTidSet;
@property (retain, nonatomic) NSMutableSet *mmContactTidSet;
@property (nonatomic) unsigned long long totalBrowserCount;
@property (nonatomic) unsigned long long mmContactBrowserCount;
@property (retain, nonatomic) NSString *lastBrowserTid;
@property (retain, nonatomic) NSMutableArray *actionTraceArray;
@property (retain, nonatomic) NSIndexPath *currentIndexPath;
@property (nonatomic) unsigned long long previewEnterScene;
@property (retain, nonatomic) NSNumber *profileSource;
@property (retain, nonatomic) NSString *contactUserName;
@property (retain, nonatomic) NSNumber *hasUnreadStoryTips;
@property (retain, nonatomic) NSNumber *waitPlayFriendCount;
@property (retain, nonatomic) WCStoryDataItem *enterDataItem;
@property (nonatomic) long long unreadMessageCount;
@property (nonatomic) long long interactiveUserCount;
@property (nonatomic) int netType;
@property (nonatomic) unsigned long long enterTime;
@property (copy, nonatomic) NSString *exposeViewId;

- (id)previewReportObjForReEnter;
- (id)init;
- (BOOL)isDoubleTapScene;
- (int)contactType;
- (void)enterPreview;
- (void)browserStoryWithTid:(id)a0 userName:(id)a1 isMMContact:(BOOL)a2 lastIndexPath:(id)a3;
- (void)reportSingleBrowserAction:(id)a0 userName:(id)a1 isMMContact:(BOOL)a2;
- (void)reportExitPreview;
- (void)reportDoubleTapHeadViewWithHasEnterPreview:(BOOL)a0;
- (void)doActionTraceWithType:(unsigned long long)a0;
- (id)arrayToJSON:(id)a0;
- (void).cxx_destruct;

@end
