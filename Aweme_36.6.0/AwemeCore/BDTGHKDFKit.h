@interface BDTGHKDFKit : NSObject

+ (id)deriveKey:(id)a0 info:(id)a1 salt:(id)a2 outputSize:(int)a3 offset:(int)a4;
+ (id)extract:(id)a0 salt:(id)a1;
+ (id)expand:(id)a0 info:(id)a1 outputSize:(int)a2 offset:(int)a3;
+ (id)deriveKey:(id)a0 info:(id)a1 salt:(id)a2 outputSize:(int)a3;

@end
