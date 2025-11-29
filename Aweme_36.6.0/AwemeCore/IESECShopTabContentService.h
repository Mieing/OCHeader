@class NSString, NSMutableDictionary;

@interface IESECShopTabContentService : IESECShopService <IESECShopTabContentService> {
    NSMutableDictionary *_registeredActions;
    NSMutableDictionary *_hookedDataSources;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerAction:(id /* block */)a0 forType:(unsigned long long)a1;
- (void)hookDataSourceOf:(id)a0 with:(id)a1;
- (id)actionsForType:(unsigned long long)a0;
- (id)hookedDataSourceOf:(id)a0;
- (void).cxx_destruct;

@end
