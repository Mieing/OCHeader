@class NSString;

@interface MidasSdkInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *offerId;
@property (retain, nonatomic) NSString *openId;
@property (retain, nonatomic) NSString *openKey;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *sessionType;
@property (retain, nonatomic) NSString *pf;
@property (retain, nonatomic) NSString *pfKey;
@property (nonatomic) int envFlag;

+ (void)initialize;

@end
