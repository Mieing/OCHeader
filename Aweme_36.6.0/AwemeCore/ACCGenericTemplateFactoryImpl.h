@class NSString;

@interface ACCGenericTemplateFactoryImpl : NSObject <ACCGenericTemplateFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)buildPreprocessTaskManager:(id)a0;
- (id)buildTTSTaskManager:(id)a0;
- (id)buildTextParamTaskManager:(id)a0;

@end
