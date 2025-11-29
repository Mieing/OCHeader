@class AWEAwemeModel, NSString, NSArray, AWECommentRequestExtraModel, AWEListDataController, UIImage, NSDictionary, AWEKnowledgeStateSceneToken, NSNumber;

@interface AWEFullPageFeedListViewControllerPayload : NSObject

@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *priorityType;
@property (nonatomic) unsigned long long initialMuteType;
@property (nonatomic) BOOL shouldStopSingleLivePhotoPlaying;
@property (nonatomic) BOOL isInitPayloadFromStateManager;
@property (nonatomic) BOOL autoKeepMuteState;
@property (nonatomic) unsigned long long listType;
@property (nonatomic) unsigned long long sliderPlayMode;
@property (nonatomic) unsigned long long initialPageMode;
@property (nonatomic) unsigned long long enterTransitionType;
@property (nonatomic) unsigned long long initialScrollAnchorType;
@property (nonatomic) BOOL canDragDownBack;
@property (retain, nonatomic) AWEListDataController *dataController;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (nonatomic) long long enterModelOriginIndex;
@property (nonatomic) unsigned long long progressViewType;
@property (retain, nonatomic) NSNumber *isOuter;
@property (copy, nonatomic) NSString *highlightID;
@property (retain, nonatomic) AWECommentRequestExtraModel *commentExtraParams;
@property (copy, nonatomic) NSArray *commentIDs;
@property (nonatomic) long long nestedLevel;
@property (retain, nonatomic) NSNumber *needScrollToIndex;
@property (nonatomic) BOOL allowTrackStayTime;
@property (retain, nonatomic) AWEKnowledgeStateSceneToken *lastSceneToken;
@property (retain, nonatomic) AWEKnowledgeStateSceneToken *currentSceneToken;
@property (nonatomic) BOOL forbidEndMultiPhotoConsume;
@property (copy, nonatomic) NSString *backToSchema;
@property (copy, nonatomic) NSString *adEventName;
@property (copy, nonatomic) NSString *cityInfoString;
@property (copy, nonatomic) NSString *searchParams;
@property (copy, nonatomic) NSDictionary *searchLogExtraDict;
@property (nonatomic) BOOL syncAutoplayWithMute;
@property (weak, nonatomic) UIImage *placeHolderImage;
@property (nonatomic) BOOL enablePreloadOpt;
@property (nonatomic) BOOL enableDelayCommentLoad;

- (void).cxx_destruct;
- (id)init;

@end
