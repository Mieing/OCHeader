@interface LLDitoUtils : NSObject

+ (id)ditoPageInfoFromResponse:(id)a0;
+ (id)ditoDataFromResponse:(id)a0;
+ (id)pageInfoFromDitoData:(id)a0;
+ (id)serverChunkedLogFromResponse:(id)a0;
+ (struct { BOOL x0; BOOL x1; id x2; })chunkFlagFromResponse:(id)a0;
+ (id)sessionTypeFromResponse:(id)a0;
+ (id)chunkNameFromDitoData:(id)a0;
+ (id)serverChunkedLogFromResponse:(id)a0 currentChunkedLog:(id)a1 chunkName:(id)a2;

@end
