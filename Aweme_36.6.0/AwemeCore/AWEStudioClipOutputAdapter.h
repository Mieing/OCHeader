@interface AWEStudioClipOutputAdapter : NSObject

+ (id)ensureSpacesInText:(id)a0 atUserText:(id)a1;
+ (void)translateClipOutputData:(id)a0 publishModel:(id)a1 completion:(id /* block */)a2;
+ (void)clipCompletionWithVideo:(id)a0 music:(id)a1 model:(id)a2 originalPublishModel:(id)a3 nav:(id)a4 coverImage:(id)a5;
+ (void)translateClipOutputData:(id)a0 completion:(id /* block */)a1;
+ (void)clipCompletionWithVideo:(id)a0 music:(id)a1 model:(id)a2 originalPublishModel:(id)a3 segmentedModel:(id)a4 nav:(id)a5 coverImage:(id)a6;
+ (void)p_copyCommonValueFromOriginal:(id)a0 to:(id)a1;
+ (void)enterEditViewControllerWithOutputData:(id)a0 originalPublishModel:(id)a1 navigationViewController:(id)a2;
+ (void)enterEditViewControllerWithOutputData:(id)a0 originalPublishModel:(id)a1 segmentedModel:(id)a2 navigationViewController:(id)a3;

@end
