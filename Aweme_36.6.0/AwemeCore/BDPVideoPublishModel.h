@class NSString, NSArray, NSDictionary;

@interface BDPVideoPublishModel : BDPBasePluginModel

@property BOOL isRequestingData;
@property long long getDataFinishedMentionCount;
@property (nonatomic) long long getDataFinishedMentionTarget;
@property (nonatomic) BOOL customStickerPathFromWeb;
@property (nonatomic) BOOL hasAnchorPermission;
@property (nonatomic) BOOL getNickNameFinished;
@property (nonatomic) long long videoDuration;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *location;
@property (nonatomic) double durationStartTime;
@property (nonatomic) BOOL hasOriginStickerID;
@property (nonatomic) BOOL anchorShow;
@property (copy, nonatomic) NSString *stickerID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *videoPath;
@property (copy, nonatomic) NSString *anchorType;
@property (copy, nonatomic) NSString *anchorTitle;
@property (copy, nonatomic) NSString *anchorDesc;
@property (copy, nonatomic) NSString *anchorPath;
@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *from;
@property (copy, nonatomic) NSArray *taskIds;
@property (copy, nonatomic) NSDictionary *extra;
@property (retain, nonatomic) NSArray *textStickers;
@property (retain, nonatomic) NSArray *hashtagStickers;
@property (retain, nonatomic) NSArray *mentionStickers;
@property (retain, nonatomic) NSArray *customStickers;
@property (retain, nonatomic) NSArray *mentionMarkers;
@property (retain, nonatomic) NSArray *hashtagMarkers;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *appIcon;
@property (copy, nonatomic) NSString *imageUrl;
@property (nonatomic) BOOL withoutAppAnchor;

- (BOOL)isNoStickers;
- (BOOL)shouldRemoveAppAnchor;
- (id)getResultDict;
- (BOOL)isTalentUserAddMissionAnchor;
- (BOOL)isTalentUserPostMissionAnchor;
- (BOOL)isTalentUserAnchor;
- (id)getAllMentionOpenIDs;
- (BOOL)isTakeVideoServerDataFinished;
- (BOOL)isCutTemplateIDInvalid;
- (void).cxx_destruct;

@end
