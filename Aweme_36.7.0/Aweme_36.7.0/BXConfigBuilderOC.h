@class ByteBenchConfigOC;

@interface BXConfigBuilderOC : NSObject

@property (readonly, nonatomic) ByteBenchConfigOC *config;

- (id)buildNewConfig;
- (id)buildAppid:(int)a0;
- (id)buildAppName:(id)a0;
- (id)buildAppVersion:(id)a0;
- (id)buildDeviceId:(id)a0;
- (id)buildUserId:(id)a0;
- (id)buildBaseUrl:(id)a0;
- (id)buildUpdateVersionCode:(id)a0;
- (id)buildLogLevel:(long long)a0;
- (id)buildDeviceModel:(id)a0;
- (id)buildWorksapce:(id)a0;
- (id)buildLibraInfo:(id)a0;
- (id)buildNetTagBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)build;
- (id)init;

@end
