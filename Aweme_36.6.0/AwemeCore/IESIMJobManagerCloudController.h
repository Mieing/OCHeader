@class NSDictionary;

@interface IESIMJobManagerCloudController : IESIMJobManagerInnerObject

@property (readonly, nonatomic) NSDictionary *configs;

- (void)p_loadConfigs;
- (void)p_modMetaInfo:(id)a0 withMods:(id)a1;
- (BOOL)processJobMeta:(id)a0;
- (void).cxx_destruct;
- (id)initWithManager:(id)a0;

@end
