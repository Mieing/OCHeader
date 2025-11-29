@class NSString;

@interface APCConfigConsumeServiceImpl : HTSService <APCConfigConsumeServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createGlobalStickerConsumerWithContext:(id)a0;
- (id)createInfiniStickerConsumerWithContext:(id)a0;
- (id)createCompleteConsumerWithContext:(id)a0;
- (id)createMaterialConsumerWithContext:(id)a0;
- (id)p_createTaskWithClass:(Class)a0 context:(id)a1;

@end
