@class UILabel, NSString;
@protocol WCPayNoticeBannerViewDelegate;

@interface WCPayNoticeBannerView : UIView

@property (retain, nonatomic) UILabel *m_titleLabel;
@property (retain, nonatomic) NSString *m_clickUrl;
@property (weak, nonatomic) id<WCPayNoticeBannerViewDelegate> m_delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateTitle:(id)a0;
- (void)updateUrl:(id)a0;
- (void)onTap:(id)a0;
- (void).cxx_destruct;

@end
