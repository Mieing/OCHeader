@class NSString, PAGView, TingCoverInfo, PAGFile, UIView;
@protocol TingPagCoverViewDelegate;

@interface TingPagCoverView : UIView <MMImageLoaderObserver, MMWebImageViewDelegate>

@property (retain, nonatomic) TingCoverInfo *viewModel;
@property (retain, nonatomic) PAGView *pagView;
@property (retain, nonatomic) PAGFile *tmplFile;
@property (retain, nonatomic) UIView *highlightedMaskView;
@property (weak, nonatomic) id<TingPagCoverViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)applyPAGImage:(id)a0 forIndex:(unsigned long long)a1 tmpl:(id)a2;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initPagView;
- (void)initHighlighedView;
- (void)layoutSubviews;
- (void)dealloc;
- (void)freeCache;
- (void)prepareForReuse;
- (void)applyCoverInfo:(id)a0;
- (BOOL)checkoutCoversIsEqual:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (void)reloadWithPAGFile:(id)a0;
- (void)starRequestTmplCoverUrls;
- (void)startLoadImgFromLocal;
- (unsigned long long)maxFetchingCount;
- (BOOL)isLegalPAGCoverStyle:(unsigned int)a0;
- (void)ImageDidLoad:(id)a0 Url:(id)a1;
- (void)onFetchImage:(id)a0 indexes:(id)a1 url:(id)a2;
- (void)ImageDidFail:(id)a0;
- (void)flush;
- (id)pagFile;
- (id)pagFileFromCoverInfo:(id)a0;
- (id)pagFilePathFromCoverInfo:(id)a0;
- (void).cxx_destruct;

@end
