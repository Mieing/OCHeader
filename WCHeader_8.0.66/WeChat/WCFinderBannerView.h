@class NSString, RichTextView;
@protocol WCFinderBannerViewDelegate;

@interface WCFinderBannerView : UIView <ILinkEventExt>

@property (retain, nonatomic) RichTextView *textView;
@property (weak, nonatomic) id<WCFinderBannerViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubViews;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setTips:(id)a0;
- (void)setTextColor:(id)a0;
- (void).cxx_destruct;

@end
