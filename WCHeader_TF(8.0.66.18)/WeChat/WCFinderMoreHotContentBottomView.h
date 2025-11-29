@class UIImageView, RichTextView, NSString;
@protocol WCFinderMoreHotContentBottomViewDelegate;

@interface WCFinderMoreHotContentBottomView : UITableViewHeaderFooterView <ILinkEventExt>

@property (retain, nonatomic) RichTextView *richTextView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (weak, nonatomic) id<WCFinderMoreHotContentBottomViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithReuseIdentifier:(id)a0;
- (void)prepareForReuse;
- (void)updateContentView:(struct CGSize { double x0; double x1; })a0;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)onClickMoreHotContent;
- (void).cxx_destruct;

@end
