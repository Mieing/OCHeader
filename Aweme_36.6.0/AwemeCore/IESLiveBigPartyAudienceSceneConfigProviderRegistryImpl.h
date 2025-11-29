@class NSString, NSMapTable;

@interface IESLiveBigPartyAudienceSceneConfigProviderRegistryImpl : NSObject <IESLiveBigPartyAudienceSceneConfigProviderRegistry>

@property (retain, nonatomic) NSMapTable *registerTable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerForScene:(unsigned long long)a0 instance:(id)a1;
- (id)configProviderForScene:(unsigned long long)a0;
- (void).cxx_destruct;

@end
