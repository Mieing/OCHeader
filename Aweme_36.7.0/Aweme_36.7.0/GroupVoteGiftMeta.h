@class NSString, HTSLiveImage, HTSLiveUser;

@interface GroupVoteGiftMeta : IESLivePBBaseMessage

@property (nonatomic) long long giftId;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;
@property (retain, nonatomic) HTSLiveUser *bindedUser;
@property (nonatomic) BOOL hasBindedUser;

+ (id)descriptor;

@end
