@class NSString, MMUIActivityIndicatorView, BrandProfileTipsSectionData, RichTextView;
@protocol BrandProfileTipsCellDelegate;

@interface BrandProfileTipsCell : UITableViewCell <ILinkEventExt> {
    RichTextView *_tipsLabel;
    MMUIActivityIndicatorView *_indicatorView;
}

@property (weak, nonatomic) id<BrandProfileTipsCellDelegate> delegate;
@property (retain, nonatomic) BrandProfileTipsSectionData *sectionData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupSubviews;
- (void)layoutSubviews;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
