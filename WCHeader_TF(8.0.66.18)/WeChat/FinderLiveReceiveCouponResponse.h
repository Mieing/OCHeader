@class NSData, NSString, BaseResponse;

@interface FinderLiveReceiveCouponResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSData *liveCookies;
@property (retain, nonatomic) NSString *buttonWording;
@property (nonatomic) unsigned int couponStatus;
@property (nonatomic) unsigned int clickButtonAction;
@property (nonatomic) unsigned int clickButtonStyle;

+ (void)initialize;

@end
