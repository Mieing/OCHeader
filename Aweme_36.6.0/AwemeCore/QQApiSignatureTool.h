@interface QQApiSignatureTool : NSObject

+ (id)hmacSha1WithContentString:(id)a0 hmacKey:(id)a1;
+ (id)signatureForGroupProWithParameters:(id)a0 path:(id)a1 signKey:(id)a2;

@end
