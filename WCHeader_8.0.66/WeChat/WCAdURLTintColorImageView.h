@class NSString;

@interface WCAdURLTintColorImageView : UIImageView <WCCanvasImageLoaderObserver>

@property (retain, nonatomic) NSString *url;
@property (nonatomic) unsigned int downloadScene;
@property (nonatomic) BOOL useCdn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setImageWithUrl:(id)a0 tintColor:(id)a1;
- (void)setImageWithUrl:(id)a0 tintColor:(id)a1 scene:(unsigned int)a2 useCdn:(BOOL)a3;
- (id)fetchImageForUrl:(id)a0;
- (void)updateImageContent;
- (void)ImageDidLoad:(id)a0 Url:(id)a1;
- (void)ImageDidFail:(id)a0;
- (void).cxx_destruct;

@end
