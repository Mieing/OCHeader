@class BaseResponse, NSString, NSData, MMListenHalfPanelInfo;

@interface MMListenMembershipJoinResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSData *respBuffer;
@property (retain, nonatomic) MMListenHalfPanelInfo *succHalfPanel;
@property (retain, nonatomic) NSString *adContinueWording;
@property (nonatomic) unsigned long long membershipExpireTimeS;

+ (void)initialize;

@end
