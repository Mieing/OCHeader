@class NSString;
@protocol EEUIAnnotation;

@interface AWEEEUIAnnotation : NSObject <AWEEEUIAnnotationProtocol>

@property (retain, nonatomic) id<EEUIAnnotation> effectUIAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)configWith:(id)a0;

- (id)hintText;
- (id)originText;
- (id)algs;
- (BOOL)needAlgPreprocess;
- (id)algPreprocess;
- (long long)maxImageCount;
- (void)callbackText:(id)a0 completion:(id /* block */)a1;
- (struct CGSize { double x0; double x1; })croppingSize;
- (long long)minImageCount;
- (BOOL)isImageEditable;
- (void)updateVideo:(id)a0 audioPath:(id)a1 previewOnly:(BOOL)a2 completion:(id /* block */)a3;
- (BOOL)isTextEditable;
- (BOOL)isMultiAssetsProp;
- (struct CGSize { double x0; double x1; })exportAssetSizeLimit;
- (void)callbackImage:(id)a0 previewOnly:(BOOL)a1 completion:(id /* block */)a2;
- (void)updateVideo:(id)a0 previewOnly:(BOOL)a1 completion:(id /* block */)a2;
- (long long)maxTextCount;
- (long long)minTextCount;
- (unsigned long long)assetType;
- (void).cxx_destruct;
- (id)placeholder;
- (id)name;
- (id)relation;
- (long long)albumFilter;

@end
