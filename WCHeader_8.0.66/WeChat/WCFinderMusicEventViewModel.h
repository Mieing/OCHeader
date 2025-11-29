@class FinderVideoTemplateInfo, NSString, NSArray, MMListenLikeResponse, MusicRelatedRecommendInfo, WCFinderTopicRouteParams, ForwardMessageLogicController, RecommendedMusicInfo, WCFinderTopicInfo;
@protocol WCFinderMusicEventViewModelDelegate;

@interface WCFinderMusicEventViewModel : NSObject <ForwardMessageLogicDelegate, WCCommitViewResultDelegate, WCFinderTopicDataKeyExt>

@property (retain, nonatomic) NSString *latestQueryText;
@property (nonatomic) BOOL queryContinueFlag;
@property (nonatomic) int topicType;
@property (nonatomic) unsigned long long topicTotalCount;
@property (retain, nonatomic) ForwardMessageLogicController *forwardLogic;
@property (nonatomic) int tabType;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSArray *tabInfoArray;
@property (retain, nonatomic) MMListenLikeResponse *likeFeedResp;
@property (retain, nonatomic) RecommendedMusicInfo *patMusicInfo;
@property (retain, nonatomic) FinderVideoTemplateInfo *videoTemplateInfo;
@property (retain, nonatomic) WCFinderTopicRouteParams *params;
@property (retain, nonatomic) MusicRelatedRecommendInfo *relatedMusicInfo;
@property (nonatomic) int getTopicInfoFlag;
@property (weak, nonatomic) id<WCFinderMusicEventViewModelDelegate> delegate;
@property (readonly, nonatomic) WCFinderTopicInfo *topicInfo;
@property (readonly, nonatomic) unsigned long long refreshTime;
@property (nonatomic) unsigned long long musicTopicId;
@property (copy, nonatomic) NSString *patTopicStr;
@property (copy, nonatomic) NSString *encryptedTopicId;
@property (nonatomic) double menuExpTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithParams:(id)a0;
- (void)setTopicInfo:(id)a0;
- (void)updateMusicTemplateInfo;
- (id)getPatPostMusicInfo;
- (void)updatePatMusicInfoByInfo:(id)a0;
- (id)getMusicLyricsWording:(id)a0;
- (unsigned long long)getTopicTotalCount;
- (id)genReportDict;
- (void)shareToFriend:(id)a0;
- (void)shareToMoment:(id)a0;
- (long long)genShareMomentType;
- (unsigned long long)genFinderShareItemType;
- (void)requestEventTabListAndRelatedMusics;
- (void)updateTabInfoArray;
- (id)defaultTabInfoArray;
- (id)eventTabInfoAtIndex:(unsigned long long)a0;
- (long long)indexOfTabType:(int)a0;
- (id)eventTabInfoWithType:(unsigned long long)a0;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)a0;
- (void)OnForwardMessageCancel:(id)a0;
- (void)onCancelForwardForForwardView:(id)a0;
- (void)onDoneForwardForForwardView:(id)a0;
- (id)getTopicsArray;
- (int)feedViewControllerScene;
- (void)likeFeed:(BOOL)a0 completion:(id /* block */)a1;
- (void)updateLikeState:(BOOL)a0;
- (id)getMusicLyricsWording;
- (id)bgmInfo;
- (void).cxx_destruct;

@end
