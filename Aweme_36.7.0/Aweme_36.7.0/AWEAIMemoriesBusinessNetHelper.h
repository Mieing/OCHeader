@interface AWEAIMemoriesBusinessNetHelper : NSObject

+ (void)requestAiMemoryWithParams:(id)a0 timeOut:(double)a1 completion:(id /* block */)a2;
+ (void)requestGenerationQueryParams:(id)a0 timeOut:(double)a1 completion:(id /* block */)a2;
+ (void)remindTaskFinishedNoticeWithParams:(id)a0 completion:(id /* block */)a1;

@end
