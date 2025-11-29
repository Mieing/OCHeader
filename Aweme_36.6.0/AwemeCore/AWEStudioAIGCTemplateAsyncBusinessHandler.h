@class NSString;

@interface AWEStudioAIGCTemplateAsyncBusinessHandler : NSObject <AWEStudioAIGCAsyncTaskBusinessHandlerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)handleGeneratedNoticeClickBeforeTaskBatchProcessFinish:(id)a0 noticeParams:(id)a1 completion:(id /* block */)a2;
+ (void)handleAIGCGeneratedWithTask:(id)a0 scene:(unsigned long long)a1 taskInfo:(id)a2 completion:(id /* block */)a3;
+ (void)_runSaveGeneratingDraftCallbackWithTask:(id)a0 success:(BOOL)a1 resultDraftID:(id)a2 error:(id)a3 completion:(id /* block */)a4;
+ (void)_saveGeneratingDraftWithTask:(id)a0 originalDraftID:(id)a1 newDraftID:(id)a2 modelForDraft:(id)a3 publishModel:(id)a4 completion:(id /* block */)a5;
+ (void)handleAIGCGeneratedWithTask:(id)a0 scene:(unsigned long long)a1 generationInfo:(id)a2 completion:(id /* block */)a3;
+ (void)saveGeneratingDraftWithTask:(id)a0 publishModel:(id)a1 completion:(id /* block */)a2;


@end
