@class WCFinderSizingRichTextLayout, WCFinderSizingRichTextView, NSString, _WCFinderTextDetailSection;
@protocol WCFinderTextDetailItemDelegate;

@interface WCFinderTextDetailSectionHeader : UICollectionReusableView <WCFinderSizingRichTextDelegate>

@property (weak, nonatomic) id<WCFinderTextDetailItemDelegate> delegate;
@property (retain, nonatomic) _WCFinderTextDetailSection *section;
@property (retain, nonatomic) WCFinderSizingRichTextView *titleView;
@property (retain, nonatomic) WCFinderSizingRichTextLayout *titleLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
