@interface BgFgRequest : WXPBGeneratedMessage

@property (nonatomic) unsigned int clientVersion;
@property (nonatomic) unsigned int deviceTypeId;
@property (nonatomic) unsigned int networkMode;
@property (nonatomic) unsigned int onlineMode;

+ (void)initialize;

@end
