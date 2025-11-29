@class MMFinderLiveQuickCommentItem;

@interface MMFinderLiveQuickCommentItemView : UIButton

@property (retain, nonatomic) MMFinderLiveQuickCommentItem *item;
@property (nonatomic) double rightMargin;
@property (copy, nonatomic) id /* block */ didTapBlock;

- (id)initWithItem:(id)a0 didTapBlock:(id /* block */)a1;
- (void)onBtnClicked;
- (void).cxx_destruct;

@end
