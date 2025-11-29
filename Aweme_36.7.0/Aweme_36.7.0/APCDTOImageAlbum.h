@class NSArray, NSString;

@interface APCDTOImageAlbum : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *selectedUploadAssets;
@property (copy, nonatomic) NSArray *assetsLocalIdentifiers;
@property (copy, nonatomic) NSArray *contents;
@property (nonatomic) BOOL autoPlay;
@property (nonatomic) long long currentIndex;
@property (nonatomic) BOOL shouldForceRecodeImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contentsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)appendImageWithPathList:(id)a0;
- (void)appendImageList:(id)a0;
- (void)appendImageWithPath:(id)a0 originPath:(id)a1;
- (void)appendImageWithResourceModel:(id)a0;
- (void)appendImages:(id)a0;
- (void)appendImageWithImage:(id)a0;
- (void)syncToPublishViewModel:(id)a0;
- (void).cxx_destruct;

@end
