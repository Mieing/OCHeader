@interface AWETemplateAIGCRequestHelper : NSObject

+ (id)convertToAIGCResourceModelsWithSlotInfos:(id)a0 templateId:(id)a1;
+ (id)requestAIGCResultsWithResourceModels:(id)a0 templateId:(id)a1 isAsync:(BOOL)a2 isUnifyInteraction:(BOOL)a3 scene:(long long)a4 targetFolder:(id)a5 aigcRequestMeta:(id)a6 completion:(id /* block */)a7 taskUnifyInteractionCompletion:(id /* block */)a8;
+ (id)convertToPreprocessResourcesWithGenericTemplateAIGCResourceModels:(id)a0;
+ (id)templateAIGCResourceModelFromPresetInfo:(id)a0 templateContextInfo:(id)a1;
+ (id)buildRequestModelWithScene:(long long)a0 templateId:(id)a1 isAsync:(BOOL)a2 isUnifyInteraction:(BOOL)a3 targetFolder:(id)a4 aigcRequestMeta:(id)a5 resourceModels:(id)a6;
+ (id /* block */)getBusinessCompletedBlockWithResourceModels:(id)a0 aigcTask:(id)a1 completion:(id /* block */)a2;
+ (id)convertToAIGCResourceInfoModelsWithGenericTemplateAIGCResourceModels:(id)a0;

@end
