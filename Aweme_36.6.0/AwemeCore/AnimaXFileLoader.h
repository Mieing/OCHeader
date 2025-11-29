@class NSString, NSBundle;

@interface AnimaXFileLoader : NSObject <AnimaXLoaderProtocol> {
    NSBundle *_assetBundle;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)getScheme;
- (id)findExistingPathFromUrl:(id)a0;
- (void).cxx_destruct;
- (void)handleRequest:(id)a0 completion:(id /* block */)a1;
- (void)setAssetBundle:(id)a0;

@end
