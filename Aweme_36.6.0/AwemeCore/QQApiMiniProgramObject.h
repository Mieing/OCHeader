@class NSString, QQApiObject;

@interface QQApiMiniProgramObject : NSObject

@property (retain, nonatomic) QQApiObject *qqApiObject;
@property (copy, nonatomic) NSString *miniAppID;
@property (copy, nonatomic) NSString *miniPath;
@property (copy, nonatomic) NSString *webpageUrl;
@property (nonatomic) unsigned long long miniprogramType;

- (void).cxx_destruct;
- (id)init;

@end
