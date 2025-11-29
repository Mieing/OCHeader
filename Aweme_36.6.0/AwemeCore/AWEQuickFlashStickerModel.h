@class AWEQuickFlashActivityStyleModel, NSString, NSMutableDictionary, NSArray, AWEQuickFlashStickerInfoModel, AWEQuickFlashStickerDataSource, NSIndexPath;

@interface AWEQuickFlashStickerModel : AWEInteractionStickerModel

@property (nonatomic) BOOL fromSchema;
@property (nonatomic) BOOL isFromFeedFollowEntry;
@property (nonatomic) BOOL isFollowEntry;
@property (nonatomic) BOOL isFromDetail;
@property (nonatomic) BOOL fromRedPacket;
@property (nonatomic) BOOL isFromFeedRecord;
@property (nonatomic) BOOL isFromPersonalHomepage;
@property (nonatomic) BOOL isNewQuickFlash;
@property (nonatomic) BOOL needInsetCurrentUser;
@property (copy, nonatomic) NSString *flashMobShootWay;
@property (retain, nonatomic) NSMutableDictionary *trackEvents;
@property (copy, nonatomic) NSString *trackEventsToServer;
@property (nonatomic) unsigned long long sourceType;
@property (retain, nonatomic) AWEQuickFlashStickerDataSource *dataSource;
@property (nonatomic) unsigned long long buttonDescStyle;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (copy, nonatomic) NSString *preTextForFetchTopic;
@property (nonatomic) unsigned long long scrollPosition;
@property (copy, nonatomic) NSArray *invitedUsers;
@property (copy, nonatomic) AWEQuickFlashStickerInfoModel *quickFlashStickerInfo;
@property (copy, nonatomic) NSArray *fullPageModelList;
@property (copy, nonatomic) NSArray *tagList;
@property (copy, nonatomic) NSArray *playList;
@property (nonatomic) long long cursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL shouldReturnToFirst;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) long long disableGestureType;
@property (nonatomic) BOOL isFlashback;
@property (nonatomic) BOOL hasQuickFlashTextRead;
@property (copy, nonatomic) NSString *flashMobTextKey;
@property (copy, nonatomic) NSString *flashMobTextReadName;
@property (nonatomic) BOOL isUseMusic;
@property (nonatomic) BOOL shouldAddInEditPage;
@property (nonatomic) BOOL memeFlash;
@property (nonatomic) BOOL hasEditedByUser;
@property (copy, nonatomic) NSArray *recordSelectedUserList;
@property (nonatomic) unsigned long long recordForceInsertTitleIndex;
@property (readonly, nonatomic) AWEQuickFlashActivityStyleModel *activityStyleModel;

+ (id)quickFlashStickerInfoJSONTransformer;
+ (id)recordSelectedUserListJSONTransformer;
+ (id)dataSourceJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)clearRecordInfo;
- (BOOL)nativeSticker;
- (id)stickerButtonDesc;
- (void)updateInvitedUsersWithSelectedUserList:(id)a0;
- (id)fullPageJoinUrl;
- (id)fullPageJoinTitle;
- (id)fullPageCreateUrl;
- (id)flashRedPocketConfigs;
- (void).cxx_destruct;
- (id)init;
- (void)setTextInfo:(id)a0;

@end
