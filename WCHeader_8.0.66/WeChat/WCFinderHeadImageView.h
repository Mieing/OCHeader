@class NSString, UIImage, UIImageView;
@protocol WCFinderHeadImageViewDelegate;

@interface WCFinderHeadImageView : UIView <WCFinderContactExt, WCFinderHeadImageViewLoadExtension>

@property (copy, nonatomic) NSString *finderKey;
@property (nonatomic, getter=isAutoUpdateImage) BOOL autoUpdateImage;
@property (nonatomic) BOOL isDefaultImageDisabled;
@property (copy, nonatomic) NSString *currentImageURL;
@property (copy, nonatomic) NSString *currentDownloadKey;
@property (retain, nonatomic) UIImage *headerDefaultImage;
@property (copy, nonatomic) NSString *rawImageURL;
@property (nonatomic) BOOL loadImageSuccessful;
@property (nonatomic) unsigned long long targetSize;
@property (weak, nonatomic) UIImageView *headImageView;
@property (weak, nonatomic) id<WCFinderHeadImageViewDelegate> delegate;
@property (nonatomic) BOOL useInnerEdgeStyle;
@property (nonatomic) unsigned long long displayStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isCacheImageWithContact:(id)a0;
+ (BOOL)isCacheImageWithURLString:(id)a0;
+ (id)getLocalImageWithURLString:(id)a0;
+ (void)saveImageData:(id)a0 URLString:(id)a1;
+ (id)getDefaultImage:(struct CGSize { double x0; double x1; })a0;
+ (void)setMediumAvatar:(id)a0 toImageView:(id)a1;

- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setDefaultImage:(id)a0;
- (id)initWithAutoUpdateImage:(BOOL)a0;
- (id)initWithAutoUpdateImage:(BOOL)a0 isDefaultImageDisabled:(BOOL)a1;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupUI;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateRadius;
- (void)updateImageWithContact:(id)a0;
- (void)updateImageWithHeadURLString:(id)a0;
- (void)updateImageWith:(id)a0;
- (id)getCurImage;
- (void)resetDefaultImage;
- (void)prepareForReuse;
- (id)getCurrentDisplayImageURL;
- (id)getCurrentDisplayImageRawURL;
- (void)updateImageWithContact:(id)a0 targetSize:(unsigned long long)a1;
- (void)updateImageWithHeadURLString:(id)a0 targetSize:(unsigned long long)a1;
- (void)updateImageWithHeadURLString:(id)a0 targetSize:(unsigned long long)a1 compleBlock:(id /* block */)a2;
- (void)headImageViewDidClick;
- (void)onFinderContactUpdate:(id)a0;
- (void)finderHeadImageLoadSuccessfulWithImage:(id)a0 targetSize:(unsigned long long)a1;
- (void).cxx_destruct;

@end
