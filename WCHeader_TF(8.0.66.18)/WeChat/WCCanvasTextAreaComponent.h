@class NSString, RichTextView;

@interface WCCanvasTextAreaComponent : WCCanvasComponent <WCCanvasImageLoaderObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) RichTextView *contentLabel;

+ (id)getRichTextFromSvrResponse:(id)a0;
+ (struct CGSize { double x0; double x1; })calcSizeForCanvasItem:(id)a0 advertiseInfo:(id)a1 orientation:(long long)a2;
+ (struct CGSize { double x0; double x1; })calcContentSizeForCanvasItem:(id)a0 advertiseInfo:(id)a1 orientation:(long long)a2 width:(double)a3;

- (void)alignTextToCenter;
- (void)adjustOneLineStyles:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)downloadAllIconImage;
- (void)ImageDidLoad:(id)a0 Url:(id)a1;
- (void)ImageDidFail:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)dealloc;
- (void)configureWithCanvasItem:(id)a0 advertiseInfo:(id)a1 orientation:(long long)a2;
- (void)alignTextWithHorizontalAlign:(long long)a0 verticalAlign:(long long)a1;
- (void).cxx_destruct;

@end
