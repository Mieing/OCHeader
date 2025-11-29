@class NSTimer, NSString, AWEMediaDownloadConfig;

@interface AWEMediaDownloadLoadingView : AWEProgressLoadingView <AWEMediaDownloadLoadingViewProtocol>

@property (retain, nonatomic) AWEMediaDownloadConfig *config;
@property (retain, nonatomic) NSTimer *downloadTimer;
@property (nonatomic) double intervalToShowCancel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)loadingViewWithConfig:(id)a0;

- (void)p_setLoadingViewCancelableAnimated:(BOOL)a0 withTitle:(id)a1 needsToast:(BOOL)a2;
- (void)dismiss;
- (void).cxx_destruct;
- (void)startDownloadTimer;
- (void)endTimer;
- (void)show;
- (void)showCancelButton;
- (id)initWithType:(long long)a0 title:(id)a1;
- (BOOL)shouldStartTimer;

@end
