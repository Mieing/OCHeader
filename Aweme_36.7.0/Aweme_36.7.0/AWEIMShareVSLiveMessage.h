@class AWEIMUser, NSString, AWEAwemeModel, UIImage, NSNumber, AWEURLModel;

@interface AWEIMShareVSLiveMessage : AWEIMMessage <AWEIMMessageConfigProtocol>

@property (copy, nonatomic) NSString *roomID;
@property (copy, nonatomic) NSString *roomOwnerID;
@property (copy, nonatomic) NSString *roomOwnerSecID;
@property (retain, nonatomic) AWEIMUser *roomOwner;
@property (retain, nonatomic) AWEURLModel *roomCoverURL;
@property (copy, nonatomic) NSString *roomDescription;
@property (copy, nonatomic) NSString *pushDetail;
@property (copy, nonatomic) NSString *roomOwnerName;
@property (retain, nonatomic) AWEURLModel *roomOwnerAvatar;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) BOOL didUploadTrackLog;
@property (nonatomic) BOOL hasShow;
@property (retain, nonatomic) UIImage *defaultCoverImage;
@property (retain, nonatomic) UIImage *defaultAvatarImage;
@property (copy, nonatomic) NSNumber *roomStageType;
@property (copy, nonatomic) NSNumber *roomVideoType;
@property (copy, nonatomic) NSNumber *roomRecordType;
@property (copy, nonatomic) NSNumber *roomRecordSubtype;
@property (copy, nonatomic) NSString *episodeGroupID;
@property (copy, nonatomic) NSNumber *episodeSeasonID;
@property (copy, nonatomic) NSString *roomEpisodePeriod;
@property (copy, nonatomic) NSNumber *roomEpisodeID;
@property (copy, nonatomic) NSString *roomTitle;
@property (copy, nonatomic) NSNumber *updateStatus;
@property (copy, nonatomic) NSString *previewText;
@property (copy, nonatomic) NSString *colletionId;
@property (copy, nonatomic) NSString *replayId;
@property (copy, nonatomic) NSString *tabId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)customMessageType;
+ (id)tackStringForEpisodeStage:(long long)a0;
+ (id)tackStringForEpisodeType:(long long)a0;
+ (id)tackStringForEpisodeSubtype:(long long)a0;
+ (id)trackStringPlayStatusWithStage:(long long)a0 videoType:(long long)a1;

- (id)initWithContentDict:(id)a0;
- (BOOL)isAllowedCellEdit;
- (BOOL)isUserCellType;
- (id)getContentDict;
- (id)contentComponentName;
- (id)videoTag;
- (BOOL)supportRefactorCell;
- (BOOL)isAllowedEmojiReply;
- (BOOL)shouldShowNicknameWithMessageType;
- (id)getSyncedExtDict;
- (BOOL)isAllowedForward;
- (id)sendMessageAndResponseTrackerParams:(id)a0;
- (double)videoTagFont;
- (double)videoTagTextAlpha;
- (id)videoPreviewText;
- (id)videoTagColor;
- (BOOL)isSupportForward;
- (id)supportMessageMenuTypeList;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
