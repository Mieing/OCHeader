@class NSString;

@interface APCInfiniMaterialConfigConsumer : APCConfigBaseConsumer <ACCConfigConsumer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_setupMaterialWithProject:(id)a0;
- (void)p_setupCanvasWithProject:(id)a0;
- (void)executeWithCompletion:(id /* block */)a0;

@end
