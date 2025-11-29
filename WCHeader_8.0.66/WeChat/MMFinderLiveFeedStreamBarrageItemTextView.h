@class MMFinderLiveFeedStreamBarrageStyleConfig, MMFinderLiveFeedStreamBarrageItem, RichTextView;

@interface MMFinderLiveFeedStreamBarrageItemTextView : UIView

@property (weak, nonatomic) MMFinderLiveFeedStreamBarrageItem *item;
@property (retain, nonatomic) RichTextView *contentTextView;
@property (retain, nonatomic) MMFinderLiveFeedStreamBarrageStyleConfig *styleConfig;

- (id)initWithStyleConfig:(id)a0 maxWidth:(double)a1;
- (id)getCurrentSubTitleTextAttributeObj;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })presentationFrame;
- (void)updateContent:(id)a0;
- (void).cxx_destruct;

@end
