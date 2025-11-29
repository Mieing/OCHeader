@class NSString;

@interface FetchDataRequest_FetchItem_LaunchParam : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSString *query;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *customVersion;
@property (nonatomic) double longitude;
@property (nonatomic) double latitude;

+ (void)initialize;

@end
