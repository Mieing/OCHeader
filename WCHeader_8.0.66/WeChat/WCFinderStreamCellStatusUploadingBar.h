@class NSString, UIView, CAShapeLayer;

@interface WCFinderStreamCellStatusUploadingBar : UIView <WCFinderDataItemExt>

@property (copy, nonatomic) NSString *tid;
@property (retain, nonatomic) CAShapeLayer *ovalShapeLayer;
@property (retain, nonatomic) UIView *progressView;
@property (nonatomic) BOOL hadEncoding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpUI;
- (void)setupProgressCricle;
- (void)updateProgress:(double)a0;
- (void)bindTid:(id)a0;
- (void)onFinderDataItemPostProgressWithTid:(id)a0 progress:(id)a1;
- (void)onFinderDataItemEncodingProgress:(double)a0;
- (void).cxx_destruct;

@end
