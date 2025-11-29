@class WCDataItem, WCTagsView, MMUIButton;
@protocol WCAdActionLinkDetailViewDelegate;

@interface WCAdActionLinkDetailView : MMUIView

@property (retain, nonatomic) WCDataItem *dataItem;
@property (retain, nonatomic) MMUIButton *detailBtn;
@property (retain, nonatomic) WCTagsView *weAppSpecialTagIcon;
@property (weak, nonatomic) id<WCAdActionLinkDetailViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dataItem:(id)a1;
- (void)generateSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void)updateDetailViewWithDataItem:(id)a0;
- (void)onDetailButtonClicked;
- (void)updateWeAppSpecialTagIcon;
- (void).cxx_destruct;

@end
