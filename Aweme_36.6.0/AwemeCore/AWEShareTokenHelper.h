@interface AWEShareTokenHelper : NSObject

+ (id)typeForToken:(unsigned long long)a0;
+ (void)newFetchTokenWithContext:(id)a0 autoCopy:(BOOL)a1 completion:(id /* block */)a2;
+ (Class)aAWEShareServiceDOUYINLiteAdaperClass;
+ (void)fetchTokenWithContext:(id)a0 autoCopy:(BOOL)a1 completion:(id /* block */)a2;
+ (void)fetchTokenUseServiceConfigWithContext:(id)a0 autoCopy:(BOOL)a1 completion:(id /* block */)a2;

- (id)aAWEShareServiceDOUYINLiteAdaper;

@end
