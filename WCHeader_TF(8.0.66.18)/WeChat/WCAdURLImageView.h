@class NSString;
@protocol WCAdURLImageViewDelegate;

@interface WCAdURLImageView : UIImageView <WCCanvasImageLoaderObserver>

@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *urlDark;
@property (nonatomic) unsigned int downloadScene;
@property (nonatomic) BOOL useCdn;
@property (weak, nonatomic) id<WCAdURLImageViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isImageForUrlExistInCache:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setImageWithUrl:(id)a0;
- (void)setImageWithUrl:(id)a0 scene:(unsigned int)a1 useCdn:(BOOL)a2;
- (void)setImageWithUrl:(id)a0 darkUrl:(id)a1;
- (void)setImageWithUrl:(id)a0 darkUrl:(id)a1 scene:(unsigned int)a2 useCdn:(BOOL)a3;
- (id)fetchImageForUrl:(id)a0;
- (void)updateImageContent;
- (void)setDefaultImageWithLightMode:(id)a0 darkMode:(id)a1;
- (void)setDefaultImageWithImageName:(id)a0;
- (void)setDefaultImageWithImageName:(id)a0 darkImageName:(id)a1;
- (void)updateImageContentWithLightImage:(id)a0 darkImage:(id)a1;
- (void)ImageDidLoad:(id)a0 Url:(id)a1;
- (void)ImageDidFail:(id)a0;
- (void).cxx_destruct;

@end
