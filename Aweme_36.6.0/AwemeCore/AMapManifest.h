@interface AMapManifest : NSObject

+ (id)actionStringWithAction:(long long)a0;
+ (id)typeStringWithType:(unsigned long long)a0;
+ (void)performManifestRequestWithAction:(long long)a0 opType:(unsigned long long)a1 parameters:(id)a2 product:(id)a3 completionBlock:(id /* block */)a4;
+ (id)manifestReformerWithAction:(long long)a0 type:(unsigned long long)a1 parameters:(id)a2 product:(id)a3;
+ (id)resultWithResponseData:(id)a0;
+ (void)performManifestRequestWithType:(unsigned long long)a0 product:(id)a1 completionBlock:(id /* block */)a2;

@end
