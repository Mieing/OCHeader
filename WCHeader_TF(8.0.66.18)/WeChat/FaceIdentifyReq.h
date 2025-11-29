@class BaseRequest, NSString, NSData;

@interface FaceIdentifyReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appid;
@property (nonatomic) unsigned long long bioid;
@property (retain, nonatomic) NSString *jsonStr;
@property (retain, nonatomic) NSString *cdnAesKey;
@property (retain, nonatomic) NSString *pictureCdnId;
@property (nonatomic) unsigned int source;
@property (nonatomic) unsigned int operateCode;
@property (nonatomic) unsigned int checkAliveType;
@property (nonatomic) unsigned int light;
@property (nonatomic) unsigned int uploadVideo;
@property (retain, nonatomic) NSData *extSpamInfo;
@property (retain, nonatomic) NSData *clientExtInfo;

+ (void)initialize;

@end
