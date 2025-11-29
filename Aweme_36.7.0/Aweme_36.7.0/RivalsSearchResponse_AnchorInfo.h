@class IESLiveRivalExtraInfo, NSString, NSArray, HTSLiveImage, ActivityUser, NSMutableArray, HTSLiveRoom;

@interface RivalsSearchResponse_AnchorInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *inviteButtonText;
@property (retain, nonatomic) HTSLiveImage *inviteButtonImage;
@property (copy, nonatomic) NSArray *tagSizes;
@property (nonatomic) struct CGSize { double x0; double x1; } nameSize;
@property (copy, nonatomic) NSString *inviteButtonText;
@property (retain, nonatomic) HTSLiveImage *inviteButtonImage;
@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *secUserId;
@property (nonatomic) long long roomId;
@property (retain, nonatomic) HTSLiveImage *avatarThumb;
@property (nonatomic) BOOL hasAvatarThumb;
@property (copy, nonatomic) NSString *nickName;
@property (nonatomic) long long shortId;
@property (nonatomic) long long fansNum;
@property (copy, nonatomic) NSString *customVerify;
@property (nonatomic) long long linkStatus;
@property (copy, nonatomic) NSString *displayId;
@property (retain, nonatomic) NSMutableArray *tagsArray;
@property (readonly, nonatomic) unsigned long long tagsArray_Count;
@property (copy, nonatomic) NSString *userIdStr;
@property (copy, nonatomic) NSString *roomIdStr;
@property (retain, nonatomic) HTSLiveRoom *room;
@property (nonatomic) BOOL hasRoom;
@property (retain, nonatomic) ActivityUser *activityUser;
@property (nonatomic) BOOL hasActivityUser;
@property (copy, nonatomic) NSString *signExtra;
@property (nonatomic) int followType;
@property (retain, nonatomic) IESLiveRivalExtraInfo *extraInfo;
@property (nonatomic) BOOL hasExtraInfo;
@property (copy, nonatomic) NSString *linkText;
@property (nonatomic) long long gender;
@property (copy, nonatomic) NSString *statusReason;
@property (copy, nonatomic) NSString *imprId;
@property (copy, nonatomic) NSString *battleAttachedInfo;
@property (copy, nonatomic) NSString *roomStatusDesc;

+ (id)descriptor;

@end
