@class BaseRequest, NSString, NSMutableArray;

@interface CheckCanSubscribeBizRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int source;
@property (retain, nonatomic) NSString *toUserName;
@property (retain, nonatomic) NSString *extInfo;
@property (retain, nonatomic) NSString *appId;
@property (nonatomic) unsigned int packNum;
@property (retain, nonatomic) NSMutableArray *androidPackNameList;
@property (retain, nonatomic) NSString *iosBunddleId;
@property (retain, nonatomic) NSString *fromUrl;
@property (nonatomic) unsigned int scene;

+ (void)initialize;

@end
