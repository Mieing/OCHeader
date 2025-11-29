@interface LynxImageLoader : NSObject

+ (id)imageService;
+ (id)sharedInstance;

- (id /* block */)loadImageFromLynxURL:(id)a0 size:(struct CGSize { double x0; double x1; })a1 contextInfo:(id)a2 processors:(id)a3 imageFetcher:(id)a4 LynxUIImage:(id)a5 enableGenericFetcher:(BOOL)a6 completed:(id /* block */)a7;
- (id /* block */)loadImageFromURL:(id)a0 size:(struct CGSize { double x0; double x1; })a1 contextInfo:(id)a2 processors:(id)a3 imageFetcher:(id)a4 completed:(id /* block */)a5;

@end
