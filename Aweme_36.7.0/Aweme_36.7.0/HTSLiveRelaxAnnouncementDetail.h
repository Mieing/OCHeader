@class HTSLiveRelaxAnnouncementDetail_HintInfo, NSString, HTSLiveImage, HTSLiveRelaxProductInfo, NSMutableArray, GPBInt32Array;

@interface HTSLiveRelaxAnnouncementDetail : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *nickName;
@property (retain, nonatomic) HTSLiveImage *avatar;
@property (nonatomic) BOOL hasAvatar;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) long long releaseTime;
@property (nonatomic) BOOL isSubscribed;
@property (nonatomic) long long subscribeCount;
@property (nonatomic) long long auditStatus;
@property (copy, nonatomic) NSString *scheduledTimeText;
@property (nonatomic) long long id_p;
@property (nonatomic) BOOL switch_p;
@property (retain, nonatomic) NSMutableArray *subscribeUserAvatarArray;
@property (readonly, nonatomic) unsigned long long subscribeUserAvatarArray_Count;
@property (retain, nonatomic) HTSLiveImage *userAvatar;
@property (nonatomic) BOOL hasUserAvatar;
@property (nonatomic) int type;
@property (retain, nonatomic) HTSLiveRelaxProductInfo *productInfo;
@property (nonatomic) BOOL hasProductInfo;
@property (copy, nonatomic) NSString *idStr;
@property (nonatomic) long long banStatus;
@property (nonatomic) long long banFinishTime;
@property (nonatomic) int scheduledTime;
@property (nonatomic) int scheduledDate;
@property (retain, nonatomic) GPBInt32Array *scheduledWeekdaysArray;
@property (readonly, nonatomic) unsigned long long scheduledWeekdaysArray_Count;
@property (nonatomic) int banType;
@property (nonatomic) long long bindItemCount;
@property (copy, nonatomic) NSString *subscribeCountStr;
@property (nonatomic) long long factionBrokerId;
@property (copy, nonatomic) NSString *factionBrokerIdStr;
@property (retain, nonatomic) HTSLiveRelaxAnnouncementDetail_HintInfo *hint;
@property (nonatomic) BOOL hasHint;
@property (nonatomic) long long expireTime;
@property (retain, nonatomic) NSMutableArray *redPacketsArray;
@property (readonly, nonatomic) unsigned long long redPacketsArray_Count;

+ (id)descriptor;

@end
