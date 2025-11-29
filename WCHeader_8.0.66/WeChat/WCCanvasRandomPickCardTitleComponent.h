@class NSArray, NSString, WCCanvasRandomPickCardTitleView;

@interface WCCanvasRandomPickCardTitleComponent : WCCanvasComponent <WCCanvasRandomPickCardTitleViewDelegate>

@property (retain, nonatomic) NSArray *cardItems;
@property (retain, nonatomic) WCCanvasRandomPickCardTitleView *titleView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })calcSizeForCanvasItem:(id)a0 advertiseInfo:(id)a1 orientation:(long long)a2;

- (void)configureWithCanvasItem:(id)a0 advertiseInfo:(id)a1 orientation:(long long)a2;
- (void)layoutSubviews;
- (void)componentWillResumeState:(BOOL)a0;
- (id)pickCardsInfo;
- (void)randomPickCardTitleResetComponent;
- (void)randomPickCardTitleUpdateLayoutWithAnimated:(BOOL)a0;
- (void)setVisibleWithAnimated:(BOOL)a0;
- (id)onTitleViewFetchHighlightedContent;
- (void).cxx_destruct;

@end
