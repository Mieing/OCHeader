@class AWEAwemeModel, NSString, NSArray, UIImage, NSDictionary, AWEURLModel, AWEIMUser, NSNumber;

@interface AWEIMShareLiveMessage : AWEIMMessage <AWEIMMsgRefreshMessageProtocol, AWEIMMessageConfigProtocol>

@property (copy, nonatomic) NSString *sendSource;
@property (copy, nonatomic) NSString *roomID;
@property (copy, nonatomic) NSString *roomOwnerID;
@property (copy, nonatomic) NSNumber *roomType;
@property (copy, nonatomic) NSString *roomOwnerSecID;
@property (retain, nonatomic) AWEIMUser *roomOwner;
@property (retain, nonatomic) AWEURLModel *roomCoverURL;
@property (copy, nonatomic) NSString *roomDescription;
@property (copy, nonatomic) NSString *pushDetail;
@property (copy, nonatomic) NSString *roomOwnerName;
@property (retain, nonatomic) AWEURLModel *roomOwnerAvatar;
@property (copy, nonatomic) NSDictionary *ecomShareTrackParams;
@property (copy, nonatomic) NSString *liveCommonShareParams;
@property (copy, nonatomic) NSArray *visibleGroupIDs;
@property (retain, nonatomic) NSNumber *pkId;
@property (retain, nonatomic) NSNumber *pkChannelId;
@property (retain, nonatomic) NSNumber *pkToRoomId;
@property (retain, nonatomic) NSString *pkCoverResourceUrl;
@property (nonatomic) BOOL isSubCamera;
@property (copy, nonatomic) NSString *cameraId;
@property (copy, nonatomic) NSString *matchId;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) BOOL didUploadTrackLog;
@property (nonatomic) BOOL hasShow;
@property (retain, nonatomic) UIImage *defaultCoverImage;
@property (retain, nonatomic) UIImage *defaultAvatarImage;
@property (nonatomic) BOOL isPaywallRoom;
@property (retain, nonatomic) NSString *fromRequestID;
@property (copy, nonatomic) NSString *shopGuideId;
@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) AWEURLModel *bottomIcon;
@property (copy, nonatomic) NSString *bottomTitle;
@property (copy, nonatomic) NSString *colletionId;
@property (copy, nonatomic) NSString *tabId;
@property (copy, nonatomic) NSString *lifeExtraInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)viewModelClass;
+ (long long)customMessageType;

- (id)getUniqueResourceId;
- (id)initWithContentDict:(id)a0;
- (BOOL)isAllowedCellEdit;
- (id)generateForwardMessage;
- (BOOL)isUserCellType;
- (id)getContentDict;
- (id)contentComponentName;
- (BOOL)supportRefactorCell;
- (BOOL)isAllowedEmojiReply;
- (BOOL)shouldShowNicknameWithMessageType;
- (BOOL)isAllowedForward;
- (BOOL)currentGroupIsVisible;
- (BOOL)isAutoSyncMsg;
- (BOOL)isGroupLiveSyncMessage;
- (BOOL)isSupportForward;
- (id)supportMessageMenuTypeList;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
