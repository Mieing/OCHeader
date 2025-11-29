@class NSString;

@interface WxaEcEntranceInfo_MiniAppConfig : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSString *fetchInfoId;
@property (retain, nonatomic) NSString *appUsername;

+ (void)initialize;

- (void)setAppUsername:(id)a0;
- (id)appUsername;
- (void)setFetchInfoId:(id)a0;
- (id)fetchInfoId;
- (void)setPath:(id)a0;
- (id)path;
- (void)setAppId:(id)a0;
- (id)appId;

@end
