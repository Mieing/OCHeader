@interface BDDataBuilderUtil : NSObject

+ (id)postprocessBuildResultData:(id)a0 sourceType:(unsigned long long)a1;
+ (id)createEmptyDataWithSourceType:(unsigned long long)a0;
+ (id)createErrorWithDesc:(id)a0;
+ (id)preprocessSourceData:(id)a0 type:(unsigned long long)a1;
+ (void)setError:(id *)a0 desc:(id)a1;

@end
