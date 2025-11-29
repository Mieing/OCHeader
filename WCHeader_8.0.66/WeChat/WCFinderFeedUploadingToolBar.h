@class UIColor, NSString, CAShapeLayer, UIView, UILabel, UIButton;
@protocol WCFinderFeedUploadingToolBarDelegate;

@interface WCFinderFeedUploadingToolBar : UIView <WCFinderDataItemExt>

@property (copy, nonatomic) NSString *tid;
@property (retain, nonatomic) CAShapeLayer *ovalShapeLayer;
@property (retain, nonatomic) UIView *progressView;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (nonatomic) BOOL hadEncoding;
@property (retain, nonatomic) UILabel *deleteTipsLabel;
@property (retain, nonatomic) UIColor *tipsLabelColor;
@property (retain, nonatomic) UIColor *normalColor;
@property (retain, nonatomic) UIColor *loadingColor;
@property (nonatomic) double lastProgress;
@property (nonatomic) long long beginPostTimeStamp;
@property (nonatomic) long long textChangeDuration;
@property (copy, nonatomic) NSString *defaultTextTips;
@property (copy, nonatomic) NSString *longTimeTextTips;
@property (weak, nonatomic) id<WCFinderFeedUploadingToolBarDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 tipsLabelColor:(id)a1 progressNormalColor:(id)a2 progressLoadingColor:(id)a3 beginPostTimeStamp:(long long)a4 textChangeDuration:(long long)a5 defaultTextTips:(id)a6 longTimeTextTips:(id)a7;
- (void)checkTimerLogic;
- (id)getCurrentShowTips;
- (void)updateCurrentTipsLabelText;
- (void)bindTid:(id)a0;
- (double)leftPadding;
- (void)setUpUI;
- (double)progressWidth;
- (void)setupProgressCricle;
- (void)updateProgress:(double)a0;
- (void)clickCancelAction;
- (void)onFinderDataItemPostProgressWithTid:(id)a0 progress:(id)a1;
- (void)onFinderDataItemEncodingProgress:(double)a0;
- (void).cxx_destruct;

@end
