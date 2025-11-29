@interface AWEPassportJSONSerializer : NSObject

+ (id)transferJSON:(id)a0 modelClass:(Class)a1 error:(id *)a2;
+ (BOOL)processWithURL:(id)a0 originalParams:(id)a1 response:(id)a2 rawData:(id)a3 mappingError:(id)a4 completionBlock:(id /* block */)a5;

@end
