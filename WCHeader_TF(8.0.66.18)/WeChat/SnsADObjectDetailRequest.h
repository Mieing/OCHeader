@class BaseRequest, NSString, RemindFriendsInfo, SKBuiltinBuffer_t;

@interface SnsADObjectDetailRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned long long id;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) SKBuiltinBuffer_t *session;
@property (nonatomic) unsigned int source;
@property (retain, nonatomic) SKBuiltinBuffer_t *adInfoSyncBuffer;
@property (nonatomic) unsigned int networkType;
@property (retain, nonatomic) RemindFriendsInfo *remindFriendsInfo;
@property (retain, nonatomic) NSString *supportCapability;
@property (retain, nonatomic) NSString *vangoghLibVersion;

+ (void)initialize;

- (void)setVangoghLibVersion:(id)a0;
- (id)vangoghLibVersion;
- (void)setSupportCapability:(id)a0;
- (id)supportCapability;
- (void)setRemindFriendsInfo:(id)a0;
- (id)remindFriendsInfo;
- (void)setNetworkType:(unsigned int)a0;
- (unsigned int)networkType;
- (void)setAdInfoSyncBuffer:(id)a0;
- (id)adInfoSyncBuffer;
- (void)setSource:(unsigned int)a0;
- (unsigned int)source;
- (void)setSession:(id)a0;
- (id)session;
- (void)setScene:(unsigned int)a0;
- (unsigned int)scene;
- (void)setId:(unsigned long long)a0;
- (unsigned long long)id;
- (void)setBaseRequest:(id)a0;
- (id)baseRequest;

@end
