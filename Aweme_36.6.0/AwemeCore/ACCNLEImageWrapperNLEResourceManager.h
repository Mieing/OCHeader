@class NSString, NSMutableDictionary, UIImage;

@interface ACCNLEImageWrapperNLEResourceManager : NSObject <ResourceHandlerDelegate>

@property (retain, nonatomic) NSMutableDictionary *allCachedResources;
@property (retain, nonatomic) NSString *unzipPath;
@property (retain, nonatomic) NSString *userSelectedImagePath;
@property (retain, nonatomic) UIImage *currentEditImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createWithUnzipPath:(id)a0 andTemplateResourceCache:(id)a1;
+ (BOOL)isBuildinResource:(id)a0;
+ (id)templateCacheDir;
+ (id)getRemoteDownloadedFilePathForBuildinResource:(id)a0 templateZipPath:(id)a1;
+ (id)getFontFromDirectory:(id)a0;

- (void)addTemplateResourceCache:(id)a0;
- (id)getResource:(id)a0;
- (id)getUIImage:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
