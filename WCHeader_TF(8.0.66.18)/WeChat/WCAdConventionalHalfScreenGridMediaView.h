@class UIPageControl, NSArray, NSString, MMScrollView;

@interface WCAdConventionalHalfScreenGridMediaView : WCAdConventionalHalfScreenMediaBaseView <UIScrollViewDelegate>

@property (retain, nonatomic) NSArray *mediaItems;
@property (retain, nonatomic) NSArray *mediaImages;
@property (retain, nonatomic) MMScrollView *scrollView;
@property (retain, nonatomic) UIPageControl *pageCtrl;
@property (nonatomic) long long clickIndex;
@property (nonatomic) long long currentIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dataItem:(id)a1 clickIndex:(long long)a2 delegate:(id)a3;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })fetchMediaSize;
- (struct CGSize { double x0; double x1; })fetchMediaContentSize;
- (double)fetchMediaContentHeightWithWidth:(double)a0;
- (double)fetchMediaContentWidthWithHeight:(double)a0;
- (id)fetchMediaImage;
- (long long)fetchCurrentIndex;
- (id)generateImageViewWithMediaItem:(id)a0;
- (void)setupSubviews;
- (void)layoutSubviews;
- (void)updateMediaContentWithWidth:(double)a0 height:(double)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void).cxx_destruct;

@end
