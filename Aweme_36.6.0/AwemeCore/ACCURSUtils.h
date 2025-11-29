@interface ACCURSUtils : NSObject

+ (id)URSWithString:(id)a0;
+ (BOOL)isLokiURS:(id)a0;
+ (BOOL)isDraftURS:(id)a0;
+ (id)queryStringToParameters:(id)a0 withDecode:(BOOL)a1;
+ (id)parametersToQueryString:(id)a0 withEncode:(BOOL)a1;
+ (BOOL)isMusicURS:(id)a0;

@end
