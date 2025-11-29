@class NSString;

@interface WCFinderJSAPIPostParams : NSObject

@property (copy, nonatomic) NSString *clientId;
@property (copy, nonatomic) NSString *mediaUrl;
@property (copy, nonatomic) NSString *thumbUrl;
@property (nonatomic) unsigned int fileSize;
@property (nonatomic) unsigned int bitrate;
@property (nonatomic) double mediaWidth;
@property (nonatomic) double mediaHeight;
@property (nonatomic) double duration;
@property (copy, nonatomic) NSString *fromAppId;
@property (nonatomic) unsigned long long fromAppSource;
@property (copy, nonatomic) NSString *fromAppExtInfo;
@property (copy, nonatomic) NSString *coverUrl;
@property (nonatomic) unsigned int waitType;

- (BOOL)isValid;
- (id)description;
- (id)toJsonStr;
- (id)initWithDictionary:(id)a0;
- (id)initWithJSONString:(id)a0;
- (void).cxx_destruct;

@end
