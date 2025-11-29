@class NSString;

@interface VoIPTipsBarMsg : WXPBGeneratedMessage

@property (nonatomic) unsigned long long roomid;
@property (retain, nonatomic) NSString *sdkGroupid;
@property (nonatomic) unsigned int roomType;
@property (nonatomic) unsigned int status;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSString *wxGroupid;
@property (retain, nonatomic) NSString *remoteUsername;

+ (void)initialize;

@end
