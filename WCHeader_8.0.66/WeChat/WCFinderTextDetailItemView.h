@class WCFinderSizingRichTextView, WCFinderSizingRichTextLayout, UIImageView, MoreInfoItem, NSString;
@protocol WCFinderTextDetailItemDelegate;

@interface WCFinderTextDetailItemView : UICollectionViewCell <WCFinderSizingRichTextDelegate>

@property (retain, nonatomic) WCFinderSizingRichTextView *titleView;
@property (retain, nonatomic) WCFinderSizingRichTextView *detailView;
@property (retain, nonatomic) WCFinderSizingRichTextLayout *titleLayout;
@property (retain, nonatomic) WCFinderSizingRichTextLayout *detailLayout;
@property (retain, nonatomic) UIImageView *arrowIcon;
@property (weak, nonatomic) id<WCFinderTextDetailItemDelegate> delegate;
@property (retain, nonatomic) MoreInfoItem *item;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)onExpandableRichTextViewTapped:(id)a0;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (void).cxx_destruct;

@end
