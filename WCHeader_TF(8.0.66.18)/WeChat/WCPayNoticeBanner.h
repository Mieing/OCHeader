@class NSString, MMUILabel;
@protocol WCPayNoticeBannerDelegate;

@interface WCPayNoticeBanner : MMUIView

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *url;
@property (weak, nonatomic) id<WCPayNoticeBannerDelegate> delegate;
@property (retain, nonatomic) MMUILabel *titleLabel;

+ (double)bannerHeightWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 title:(id)a1 oneline:(BOOL)a2;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 title:(id)a1 url:(id)a2 readonly:(BOOL)a3 oneline:(BOOL)a4;
- (void)setBackgroundColor:(id)a0;
- (void)onTap:(id)a0;
- (void).cxx_destruct;

@end
