@class WCFinderNormalProgressBar, WCFinderFeedImageCDNView, WCFinderDataItem, NSString, UILabel, RichTextView, UIButton;
@protocol WCFinderBriefIntroCradViewDelegate;

@interface WCFinderBriefIntroCradView : WCFinderCommonBottomBannerView <WCFinderFeedImageCDNViewDelegate, WCFinderProgressBarDelegate>

@property (retain, nonatomic) UILabel *nextTipsLabel;
@property (retain, nonatomic) UIButton *closeBtn;
@property (retain, nonatomic) WCFinderFeedImageCDNView *coverImageView;
@property (retain, nonatomic) RichTextView *contentTextView;
@property (retain, nonatomic) WCFinderNormalProgressBar *progressBar;
@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (nonatomic) double countdownDuration;
@property (weak, nonatomic) id<WCFinderBriefIntroCradViewDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 contentVM:(id)a1 countdownDuration:(double)a2;
- (void)setUpUIWithDataItem:(id)a0 countdownDuration:(double)a1;
- (void)progressBarHidden:(BOOL)a0 resumeProgress:(BOOL)a1;
- (void)onClickCloseBtn;
- (void)onClickCardAction;
- (void)onPlayerProgressBarCurPlayPrecent:(double)a0 dragState:(unsigned long long)a1;
- (void).cxx_destruct;

@end
