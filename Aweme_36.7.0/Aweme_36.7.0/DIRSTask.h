@interface DIRSTask : NSObject

+ (void)asyncGlobalTask:(id /* block */)a0;
+ (void)asyncMainTask:(id /* block */)a0 forContext:(id)a1;
+ (void)asyncConcurrentTask:(id /* block */)a0;
+ (void)asyncMain:(id /* block */)a0;
+ (id)defaultConcurrent;
+ (void)initialize;

@end
