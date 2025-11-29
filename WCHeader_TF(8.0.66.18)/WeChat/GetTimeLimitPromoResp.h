@class NSString, DynamicColor, BaseResponse;

@interface GetTimeLimitPromoResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) BOOL showPromo;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *logoUrl;
@property (retain, nonatomic) NSString *logoMd5;
@property (retain, nonatomic) NSString *url;
@property (nonatomic) unsigned int queryPerncentage;
@property (nonatomic) unsigned int queryTimestamp;
@property (retain, nonatomic) DynamicColor *textColor;
@property (retain, nonatomic) DynamicColor *backColor;
@property (retain, nonatomic) NSString *adName;

+ (void)initialize;

@end
