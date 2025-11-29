@class NSString;

@interface BDLOneCardImageLoader : NSObject <BDLImageLoaderProtocol>

@property (copy, nonatomic) NSString *rootDirUrl;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *cardPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canRequestURL:(id)a0;
- (void)requestImage:(id)a0 size:(struct CGSize { double x0; double x1; })a1 complete:(id /* block */)a2;
- (id)initWithBundle:(id)a0 WithCardPath:(id)a1;
- (id)initWithRootDirUrl:(id)a0;
- (void).cxx_destruct;

@end
