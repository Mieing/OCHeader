@class BaseRequest, NSString;

@interface FaceVideoBindBioIdRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned long long bioid;
@property (retain, nonatomic) NSString *videoCdnId;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *cdnAesKey;

+ (void)initialize;

@end
