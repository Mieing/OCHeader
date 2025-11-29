@interface BDPModelUtils : NSObject

+ (id)urlFromStrings:(id)a0;
+ (id)modelExtensionForType:(long long)a0 dic:(id)a1 versionType:(id)a2 key:(id)a3 iv:(id)a4 buildTag:(id)a5 updateBlk:(id /* block */)a6;
+ (id)packagesFromDict:(id)a0 decryptKey:(id)a1 iv:(id)a2 isPlugin:(BOOL)a3;
+ (id)packagesFromDict:(id)a0 decryptKey:(id)a1 iv:(id)a2;

@end
