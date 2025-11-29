@class UIColor, UIFont, NSArray, NSString, NSMutableArray;

@interface WCTimeLineTagView : UIView <MMImageLoaderObserver>

@property (retain, nonatomic) UIColor *tagDefaultBackgroundColor;
@property (retain, nonatomic) UIFont *tagFont;
@property (retain, nonatomic) UIColor *tagDefaultColor;
@property (nonatomic) double tagMargin;
@property (retain, nonatomic) NSMutableArray *labelArray;
@property (retain, nonatomic) NSArray *dataArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initView;
- (void)setIconImage:(id)a0 andUrl:(id)a1;
- (void)setIconImageInner:(int)a0;
- (void)setIconImage:(id)a0 andIndex:(int)a1 isForDark:(BOOL)a2;
- (void)checkAndDownloadIcon;
- (void)downloadIconInner:(id)a0 isForDark:(BOOL)a1 andIndex:(int)a2;
- (id)fetchUIColorAtIndex:(int)a0 isForTagName:(BOOL)a1;
- (id)fetchTagBgColorAtIndex:(int)a0;
- (id)fetchTagNameColorAtIndex:(int)a0;
- (id)fetchTagNameAtIndex:(int)a0;
- (id)fetchUIImageAtIndex:(int)a0;
- (id)fetchDefaultUIImage;
- (id)fetchIconUrl:(int)a0 isForDark:(BOOL)a1;
- (BOOL)isTagHasIcon:(int)a0;
- (void)initLabelViews;
- (void)layoutSubviews;
- (void)ImageDidLoad:(id)a0 Url:(id)a1;
- (void)ImageDidFail:(id)a0;
- (void).cxx_destruct;

@end
