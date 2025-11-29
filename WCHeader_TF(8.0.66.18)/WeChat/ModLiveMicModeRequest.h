@class BaseRequest, NSString;

@interface ModLiveMicModeRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSString *roomId;
@property (nonatomic) unsigned int liveMicMode;

+ (void)initialize;

@end
