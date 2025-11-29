@class NSString, NSArray, NSURL, BDLynxBundle;

@interface BDLynxImageLoader : NSObject <BDLImageLoaderProtocol>

@property (retain) NSString *cardID;
@property (retain) BDLynxBundle *bundle;
@property (retain) NSArray *extURLPrefix;
@property (retain) NSURL *extDirRoot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTemplateConfig:(id)a0;
- (BOOL)canRequestURL:(id)a0;
- (void)requestImage:(id)a0 size:(struct CGSize { double x0; double x1; })a1 complete:(id /* block */)a2;
- (id)initWithBundle:(id)a0 cardID:(id)a1;
- (void).cxx_destruct;

@end
