@class FinderTopicBgmInfo, NSString, ForwardMessageLogicController, NSArray, WCFinderTopicInfo, FinderLocation, WCFinderTopicRouteParams;
@protocol WCFinderEventViewModelDelegate;

@interface WCFinderEventViewModel : NSObject <ForwardMessageLogicDelegate, WCCommitViewResultDelegate, WCFinderTopicDataKeyExt>

@property (retain, nonatomic) NSString *latestQueryText;
@property (copy, nonatomic) NSString *topicDetailLocation;
@property (nonatomic) int topicType;
@property (nonatomic) unsigned long long topicTotalCount;
@property (retain, nonatomic) ForwardMessageLogicController *forwardLogic;
@property (retain, nonatomic) FinderLocation *location;
@property (nonatomic) int fromType;
@property (nonatomic) unsigned long long refreshTime;
@property (retain, nonatomic) FinderTopicBgmInfo *bgmInfo;
@property (nonatomic) unsigned long long patMusicPermission;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSArray *tabInfoArray;
@property (weak, nonatomic) id<WCFinderEventViewModelDelegate> delegate;
@property (readonly, nonatomic) WCFinderTopicInfo *topicInfo;
@property (nonatomic) unsigned long long eventTopicId;
@property (copy, nonatomic) NSString *encryptedTopicId;
@property (retain, nonatomic) WCFinderTopicRouteParams *params;
@property (nonatomic) double menuExpTime;
@property (copy, nonatomic) NSString *refObjectid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)setTopicInfo:(id)a0;
- (id)streamReportPageTag;
- (id)genTopicPageTagTitle;
- (void)resetSearchStatus;
- (unsigned long long)getTopicTotalCount;
- (void)shareToFriend:(id)a0;
- (void)shareToMoment:(id)a0;
- (id)getMusicLyricsWording;
- (void)requestEventTabList;
- (void)updateTabInfoArray;
- (id)defaultTabInfoArray;
- (void)closeEvent;
- (id)eventTabInfoAtIndex:(unsigned long long)a0;
- (long long)indexOfTabType:(int)a0;
- (id)eventTabInfoWithType:(unsigned long long)a0;
- (BOOL)hasVideoTemplateEntrance;
- (unsigned int)videoTemplatePermittedPublishMethodType;
- (unsigned long long)templateType;
- (id)templateID;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)a0;
- (unsigned long long)getReportMusicType;
- (void)OnForwardMessageCancel:(id)a0;
- (void)onCancelForwardForForwardView:(id)a0;
- (void)onDoneForwardForForwardView:(id)a0;
- (id)getTopicsArray;
- (int)feedViewControllerScene;
- (void).cxx_destruct;

@end
