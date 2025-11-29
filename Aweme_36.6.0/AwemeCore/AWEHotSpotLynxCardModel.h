@class NSArray, NSDictionary, NSString, NSNumber;

@interface AWEHotSpotLynxCardModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *awemeList;
@property (nonatomic) BOOL isFullScreen;
@property (nonatomic) BOOL forbiddenOtherAlert;
@property (nonatomic) BOOL disableVerticalScrollGesture;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (nonatomic) BOOL disableLoopVideo;
@property (nonatomic) BOOL useLiveContainer;
@property (nonatomic) BOOL useHunterContainer;
@property (nonatomic) BOOL isSimpleQuestionnaire;
@property (nonatomic) long long popUpThreshold;
@property (copy, nonatomic) NSDictionary *clientDataDic;
@property (copy, nonatomic) NSString *token;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (copy, nonatomic) NSString *feedCardTemplateIconUrl;
@property (copy, nonatomic) NSString *feedCardTemplateSchema;
@property (nonatomic) unsigned long long feedCardTemplateCardType;
@property (copy, nonatomic) NSString *settingKey;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *feData;
@property (copy, nonatomic) NSString *clientData;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) BOOL isFeedCardTemplate;
@property (copy, nonatomic) NSString *businessID;
@property (copy, nonatomic) NSString *feedCardUUID;
@property (copy, nonatomic) NSDictionary *feedCardTemplate;
@property (copy, nonatomic) NSString *mainFallFeedCardScene;
@property (readonly, nonatomic) unsigned long long templateType;
@property (readonly, nonatomic) unsigned long long cardType;
@property (nonatomic) BOOL isFromFeedCard;
@property (nonatomic) BOOL isGray;
@property (nonatomic) BOOL enableSubscription;
@property (readonly, copy, nonatomic) NSArray *subscriptionIDArray;
@property (nonatomic) BOOL isVideoPlayable;
@property (nonatomic) unsigned long long theme;
@property (copy, nonatomic) NSString *disableCommentTitle;
@property (nonatomic) BOOL isActivityCard;
@property (nonatomic) BOOL needDestroy;
@property (nonatomic) BOOL enableBigFontMode;
@property (nonatomic) BOOL disableSkipForLoadError;
@property (readonly, nonatomic) BOOL canSendComment;
@property (readonly, nonatomic) BOOL canRespondToLeftGesture;
@property (nonatomic) unsigned long long loadStatus;
@property (nonatomic) double loadDuration;
@property (copy, nonatomic) NSString *taskName;
@property (retain, nonatomic) NSNumber *taskId;
@property (nonatomic) unsigned long long taskIndexInFeed;
@property (nonatomic) BOOL isOpened;
@property (nonatomic) BOOL animationShowed;
@property (nonatomic) BOOL isCached;
@property (copy, nonatomic) NSString *luckyCatCardKey;
@property (nonatomic) unsigned long long questionnaireStatus;
@property (copy, nonatomic) NSDictionary *customExtraInfo;
@property (retain, nonatomic) NSNumber *isHiddenBottomBar;

+ (id)JSONKeyPathsByPropertyKey;

- (void)updateAwemeList:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
