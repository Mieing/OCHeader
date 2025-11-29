@class WCFinderFeedImageCDNView, UIImageView, NSString, UIView, UITapGestureRecognizer;
@protocol WCFinderLandScapePlayCompleteCoverInfoViewDelegate;

@interface WCFinderLandScapePlayCompleteCoverInfoView : MMUIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) WCFinderFeedImageCDNView *coverView;
@property (retain, nonatomic) UIView *maskBGView;
@property (retain, nonatomic) UIImageView *playView;
@property (retain, nonatomic) UITapGestureRecognizer *tapGes;
@property (weak, nonatomic) id<WCFinderLandScapePlayCompleteCoverInfoViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;
- (void)setupSubViews;
- (void)updateWithDataItem:(id)a0;
- (struct CGSize { double x0; double x1; })playViewSize;
- (void)layoutSubviews;
- (void)onTap:(id)a0;
- (void).cxx_destruct;

@end
