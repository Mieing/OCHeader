@class NSString;

@interface AWEStudioAIGCEffectAsyncBusinessHandler : NSObject <AWEStudioAIGCAsyncTaskBusinessHandlerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)handleGeneratedNoticeClickBeforeTaskBatchProcessFinish:(id)a0 noticeParams:(id)a1 completion:(id /* block */)a2;
+ (void)handleAIGCGeneratedWithTask:(id)a0 scene:(unsigned long long)a1 taskInfo:(id)a2 completion:(id /* block */)a3;
+ (void)handleAIGCGeneratedWithTask:(id)a0 scene:(unsigned long long)a1 generationInfo:(id)a2 completion:(id /* block */)a3;
+ (void)saveGeneratingDraftWithTask:(id)a0 publishModel:(id)a1 completion:(id /* block */)a2;


@end
