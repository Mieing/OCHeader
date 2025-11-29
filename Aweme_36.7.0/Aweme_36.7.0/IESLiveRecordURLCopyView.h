@class NSString, UILabel, UIView, UIButton;
@protocol IESLiveInternalRouter;

@interface IESLiveRecordURLCopyView : UIView

@property (copy, nonatomic) NSString *URL;
@property (retain, nonatomic) id<IESLiveInternalRouter> internalRouter;
@property (retain, nonatomic) UIView *bgMaskView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *instructionsButton;
@property (retain, nonatomic) UIView *dividerLineBelowTitle;
@property (retain, nonatomic) UILabel *streamingCodeLabel;
@property (retain, nonatomic) UILabel *streamingTipsLabel;
@property (retain, nonatomic) UIView *streamingURLLabelWrapperView;
@property (retain, nonatomic) UILabel *streamingURLLabel;
@property (retain, nonatomic) UIButton *streamingURLCopyButton;
@property (retain, nonatomic) UIView *dividerLineBelowStreamingURL;
@property (retain, nonatomic) UILabel *downloadOfficialOBSTitleLabel;
@property (retain, nonatomic) UILabel *downloadOfficialOBSTipsLabel;
@property (retain, nonatomic) UIView *officialOBSDownloadURLLabelWrapperView;
@property (retain, nonatomic) UILabel *officialOBSDownloadURLLabel;
@property (retain, nonatomic) UIButton *officialOBSDownloadURLCopyButton;
@property (copy, nonatomic) id /* block */ dissmissHandler;

- (BOOL)useNewStyle;
- (void)showWithAnimation;
- (void)_initUI;
- (void)_layoutUI;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 URL:(id)a1;
- (id)_signatureEncodeString:(id)a0;
- (void)_openInstructionsPage;
- (void)_copyStreamingURLToPasteboard;
- (void)_copyOfficialOBSDownloadURLToPasteboard;
- (id)_officialOBSDownloadURLUsingURLEncode:(BOOL)a0;
- (void).cxx_destruct;
- (void)_dismiss;
- (id)_encodeString:(id)a0;

@end
