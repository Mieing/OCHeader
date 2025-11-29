@class NSString, MMContext;

@interface MJTemplateServiceProvider : NSObject <OMJTemplateServiceProvider> {
    MMContext *_mmContext;
}

@property (nonatomic) unsigned long long templateType;
@property (copy, nonatomic) id /* block */ getSceneBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)hardcodeMetaDataWithTemplateId:(id)a0;

- (id)init;
- (void)requestTemplateMetadataWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;

@end
