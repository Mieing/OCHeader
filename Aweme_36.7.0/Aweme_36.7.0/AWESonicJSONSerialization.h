@interface AWESonicJSONSerialization : NSObject

+ (id)JSONObjectWithData:(id)a0 option:(unsigned long long)a1 core:(long long)a2 error:(id *)a3;
+ (id)JSONObjectWithString:(id)a0 option:(unsigned long long)a1 core:(long long)a2 error:(id *)a3;
+ (id)JSONObjectWithData:(id)a0 error:(id *)a1;
+ (id)JSONObjectWithString:(id)a0 error:(id *)a1;
+ (id)valueInJSONOnDemandWithData:(id)a0 key:(id)a1 error:(id *)a2;
+ (id)valueOnDemandWithData:(id)a0 key:(id)a1 error:(id *)a2;
+ (void)_aweLazyRegisterLoad_AWEMicroApp;

@end
