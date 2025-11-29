@class NSString, HTSLiveUser;

@interface HTSLiveGiftComment : IESLivePBBaseMessage

@property (nonatomic) long long commentId;
@property (nonatomic) long long playId;
@property (nonatomic) long long roomId;
@property (nonatomic) long long userId;
@property (nonatomic) long long anchorId;
@property (nonatomic) long long giftId;
@property (copy, nonatomic) NSString *giftOrderId;
@property (copy, nonatomic) NSString *reviewId;
@property (nonatomic) int anonymousType;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) int status;
@property (copy, nonatomic) NSString *submitTime;
@property (copy, nonatomic) NSString *reviewSubmitTime;
@property (copy, nonatomic) NSString *reviewFinishTime;
@property (copy, nonatomic) NSString *createTime;
@property (copy, nonatomic) NSString *updateTime;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *rejectReason;
@property (nonatomic) long long liveId;
@property (nonatomic) long long appId;
@property (retain, nonatomic) HTSLiveUser *userInfo;
@property (nonatomic) BOOL hasUserInfo;
@property (copy, nonatomic) NSString *userOpenId;
@property (copy, nonatomic) NSString *anchorOpenId;

+ (id)descriptor;

@end
