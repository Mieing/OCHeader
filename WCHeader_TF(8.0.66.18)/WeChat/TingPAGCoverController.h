@class UIColor, NSString, TingPAGImageView, PAGFile, TingCoverInfo, NSMutableArray;
@protocol TingPAGCoverControllerDelegate;

@interface TingPAGCoverController : NSObject <MMImageLoaderObserver>

@property (retain, nonatomic) PAGFile *tmplFile;
@property (retain, nonatomic) NSMutableArray *arrCoverUrl;
@property (weak, nonatomic) TingPAGImageView *bindPagPlayer;
@property (weak, nonatomic) id<TingPAGCoverControllerDelegate> delegate;
@property (retain, nonatomic) TingCoverInfo *coverInfo;
@property (retain, nonatomic) UIColor *oCoverBgColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)applyPAGImage:(id)a0 forIndex:(unsigned long long)a1 tmpl:(id)a2;

- (id)initWithCoverInfo:(id)a0;
- (void)updateCoverInfo:(id)a0;
- (void)bindPAGView:(id)a0;
- (void)unbindPAGView;
- (void)resetDefaultImages;
- (void)starRequestTmplCoverUrls;
- (void)ImageDidLoad:(id)a0 Url:(id)a1;
- (void)onFetchImage:(id)a0 indexes:(id)a1 url:(id)a2;
- (void)flush;
- (void)freeCache;
- (id)pagFileFromCoverInfo:(id)a0;
- (id)pagFilePathFromCoverInfo:(id)a0;
- (void).cxx_destruct;

@end
