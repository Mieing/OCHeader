@class WCFinderJumpInfoDynamicCarouselDetailSubViewItem, NSString, MMWebImageView, MMUILabel;

@interface WCFinderJumpInfoDynamicCarouselDetailItemView : UIView <MMWebImageViewDelegate>

@property (retain, nonatomic) MMWebImageView *iconImageView;
@property (retain, nonatomic) MMUILabel *textLabel;
@property (readonly, nonatomic) WCFinderJumpInfoDynamicCarouselDetailSubViewItem *subViewItem;
@property (copy, nonatomic) id /* block */ contentSizeDidChangeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createIconImageView;
+ (id)createTextLabel;

- (id)initWithSubViewItem:(id)a0;
- (void)loadSubviews;
- (void)updateContent;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })iconSizeThatFitsWithMaxHeight:(double)a0;
- (void)layoutSubviews;
- (void)contentSizeDidChange;
- (void)onLoadImageOK:(id)a0;
- (void).cxx_destruct;

@end
