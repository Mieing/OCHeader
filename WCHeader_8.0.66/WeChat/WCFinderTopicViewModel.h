@class NSData, NSString, FinderTopicBgmInfo, NSArray, WCFinderTopicRouteParams, ForwardMessageLogicController, FinderLocation, WCFinderTopicInfo;
@protocol WCFinderTopicViewModelDelegate;

@interface WCFinderTopicViewModel : NSObject <ForwardMessageLogicDelegate, WCCommitViewResultDelegate>

@property (retain, nonatomic) WCFinderTopicRouteParams *params;
@property (retain, nonatomic) WCFinderTopicInfo *topicInfo;
@property (retain, nonatomic) NSString *latestQueryText;
@property (retain, nonatomic) NSString *latestRequestID;
@property (nonatomic) BOOL queryContinueFlag;
@property (copy, nonatomic) NSString *topicDetailLocation;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) int topicType;
@property (nonatomic) unsigned long long topicTotalCount;
@property (copy, nonatomic) NSString *latitude;
@property (copy, nonatomic) NSString *longitude;
@property (copy, nonatomic) NSString *refObjectid;
@property (retain, nonatomic) ForwardMessageLogicController *forwardLogic;
@property (retain, nonatomic) FinderLocation *location;
@property (nonatomic) int fromType;
@property (nonatomic) unsigned long long refreshTime;
@property (retain, nonatomic) FinderTopicBgmInfo *bgmInfo;
@property (nonatomic) unsigned long long patMusicPermission;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSArray *tabInfoArray;
@property (nonatomic) unsigned long long defaultIndex;
@property (weak, nonatomic) id<WCFinderTopicViewModelDelegate> delegate;
@property (nonatomic) unsigned long long eventTopicId;
@property (copy, nonatomic) NSString *encryptedTopicId;
@property (nonatomic) double menuExpTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithParams:(id)a0;
- (void)resetSearchStatus;
- (void)requestTopicTabList;
- (void)updateTabInfoArray;
- (id)defaultTabInfoArray;
- (id)topicTabInfoAtIndex:(unsigned long long)a0;
- (id)topicTabInfoWithType:(int)a0;
- (long long)indexOfTabType:(int)a0;
- (id)getHeaderImageUrl;
- (unsigned long long)getTopicTotalCount;
- (unsigned long long)getTopicTotalWatchCount;
- (id)getTopicTitle;
- (id)getTopicLocation;
- (id)getTopicWordsTopicExt;
- (void)shareToFriend:(id)a0;
- (void)shareToMoment:(id)a0;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)a0;
- (unsigned long long)getReportMusicType;
- (void)OnForwardMessageCancel:(id)a0;
- (void)onCancelForwardForForwardView:(id)a0;
- (void)onDoneForwardForForwardView:(id)a0;
- (id)getTopicsArray;
- (int)feedViewControllerScene;
- (id)getHeaderOptionParams;
- (void).cxx_destruct;

@end
