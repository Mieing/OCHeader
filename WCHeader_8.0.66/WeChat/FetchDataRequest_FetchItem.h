@class NSString, FetchDataRequest_FetchItem_LaunchParam;

@interface FetchDataRequest_FetchItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *username;
@property (nonatomic) unsigned int fetchType;
@property (retain, nonatomic) FetchDataRequest_FetchItem_LaunchParam *preFetchParam;
@property (retain, nonatomic) NSString *token;
@property (retain, nonatomic) NSString *appid;

+ (void)initialize;

@end
