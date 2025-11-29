@class NSString;

@interface FinderAdBaseRequest : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *deviceInfo;
@property (retain, nonatomic) NSString *userAgent;
@property (nonatomic) unsigned int connectType;
@property (nonatomic) unsigned int carrier;
@property (retain, nonatomic) NSString *vangoghLibVersion;

+ (void)initialize;

@end
