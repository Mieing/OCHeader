@class NSString, UILabel, MMWebImageView;
@protocol MMLocationAttributeBannerDelegate;

@interface MMLocationAttributeBanner : MMUIView <MMWebImageViewDelegate> {
    NSString *_link;
    UILabel *_titleLable;
    MMWebImageView *_logoImgView;
}

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *logoUrl;
@property (weak, nonatomic) id<MMLocationAttributeBannerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onTapBanner:(id)a0;
- (void)updateBanner:(id)a0 LogoUrl:(id)a1;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)onLoadImageOK:(id)a0;
- (void).cxx_destruct;

@end
