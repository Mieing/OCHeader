@class NSArray, UILabel, NSString;
@protocol MMFinderLiveTagsLabelDelegate;

@interface MMFinderLiveTagsLabel : UIView <MMWebImageViewDelegate>

@property (retain, nonatomic) NSArray *imageViews;
@property (weak, nonatomic) id<MMFinderLiveTagsLabelDelegate> delegate;
@property (retain, nonatomic) NSArray *tags;
@property (nonatomic) struct CGSize { double width; double height; } tagEstimateSize;
@property (nonatomic) double spacing;
@property (retain, nonatomic) UILabel *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })estimateSizeWithProduct:(id)a0 font:(id)a1 lineHeight:(double)a2 maxLines:(unsigned long long)a3 tagEstimateSize:(struct CGSize { double x0; double x1; })a4 spacing:(double)a5 inWidth:(double)a6;
+ (struct CGSize { double x0; double x1; })estimateSizeWithBulkBuy:(id)a0 font:(id)a1 lineHeight:(double)a2 maxLines:(unsigned long long)a3 tagEstimateSize:(struct CGSize { double x0; double x1; })a4 spacing:(double)a5 inWidth:(double)a6;
+ (struct CGSize { double x0; double x1; })estimateSizeWithContent:(id)a0 font:(id)a1 lineHeight:(double)a2 maxLines:(unsigned long long)a3 tags:(id)a4 tagEstimateSize:(struct CGSize { double x0; double x1; })a5 spacing:(double)a6 inWidth:(double)a7;

- (void)updateWithProduct:(id)a0 lineHeight:(double)a1 font:(id)a2;
- (void)updateWithBulkBuy:(id)a0 lineHeight:(double)a1 font:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updatePre:(double)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)onLoadImageOK:(id)a0;
- (void).cxx_destruct;

@end
