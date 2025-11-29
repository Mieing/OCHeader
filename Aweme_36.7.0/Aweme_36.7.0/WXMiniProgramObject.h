@class NSString, NSData, NSDictionary;

@interface WXMiniProgramObject : NSObject

@property (copy, nonatomic) NSString *webpageUrl;
@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSString *path;
@property (retain, nonatomic) NSData *hdImageData;
@property (nonatomic) BOOL withShareTicket;
@property (nonatomic) unsigned long long miniProgramType;
@property (nonatomic) BOOL disableForward;
@property (nonatomic) BOOL isUpdatableMessage;
@property (nonatomic) BOOL isSecretMessage;
@property (retain, nonatomic) NSDictionary *extraInfoDic;

+ (id)object;

- (void).cxx_destruct;
- (id)init;

@end
