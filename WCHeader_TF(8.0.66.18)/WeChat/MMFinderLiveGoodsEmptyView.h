@class NSString, RichTextView, FinderDirectAddPreviousLiveProductsPageInfo;
@protocol MMFinderLiveGoodsEmptyViewDelegate;

@interface MMFinderLiveGoodsEmptyView : UIView <ILinkEventExt>

@property (retain, nonatomic) RichTextView *textView;
@property (nonatomic) BOOL isLastLayoutOrientationIsPortrait;
@property (nonatomic) BOOL forceLayoutUI;
@property (weak, nonatomic) id<MMFinderLiveGoodsEmptyViewDelegate> delegate;
@property (retain, nonatomic) FinderDirectAddPreviousLiveProductsPageInfo *addPreviousLiveProductsPageInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)layoutUI;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)textFont;
- (void).cxx_destruct;

@end
