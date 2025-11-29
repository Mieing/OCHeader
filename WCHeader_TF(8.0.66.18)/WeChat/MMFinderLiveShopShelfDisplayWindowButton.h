@class NSString, MMWebImageView;
@protocol MMFinderLiveShopShelfDisplayWindowButtonLoadDelegate;

@interface MMFinderLiveShopShelfDisplayWindowButton : MMUIButton <MMWebImageViewDelegate>

@property (retain, nonatomic) MMWebImageView *rIconView;
@property (weak, nonatomic) id<MMFinderLiveShopShelfDisplayWindowButtonLoadDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)updateWithShopWindowInfo:(id)a0;
- (void)onLoadImageOK:(id)a0;
- (void).cxx_destruct;

@end
