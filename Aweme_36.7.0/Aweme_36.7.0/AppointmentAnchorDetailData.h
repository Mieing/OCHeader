@class NSString, HTSLiveImage;

@interface AppointmentAnchorDetailData : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *anchorNickName;
@property (retain, nonatomic) HTSLiveImage *anchorAvatar;
@property (nonatomic) BOOL hasAnchorAvatar;
@property (copy, nonatomic) NSString *fansUserCountStr;
@property (copy, nonatomic) NSString *authenticationInfo;
@property (retain, nonatomic) HTSLiveImage *authenticationBadge;
@property (nonatomic) BOOL hasAuthenticationBadge;
@property (copy, nonatomic) NSString *fansclubUserCountStr;
@property (copy, nonatomic) NSString *recentlyLiveCountStr;
@property (nonatomic) BOOL followed;
@property (nonatomic) BOOL appointmentStatus;
@property (copy, nonatomic) NSString *liveStartTimeStr;
@property (copy, nonatomic) NSString *appointmentContent;
@property (copy, nonatomic) NSString *appointmentCountStr;
@property (nonatomic) long long wantSeeCount;
@property (copy, nonatomic) NSString *wantSeeCountStr;

+ (id)descriptor;

@end
