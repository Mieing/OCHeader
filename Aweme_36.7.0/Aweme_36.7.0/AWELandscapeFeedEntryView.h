@class NSString, UIImageView, AWEAwemeModel, UILabel, UIView;

@interface AWELandscapeFeedEntryView : UIView <AWELandscapeFeedEntryViewProtocol>

@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *contentLabel;
@property (nonatomic) BOOL isMonitoring;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) id /* block */ didUpdateHiddenBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void)setCenter:(struct CGPoint { double x0; double x1; })a0;
- (void)updateLayoutWithShowDesc:(BOOL)a0;
- (void)updateContentLabelAlpha:(double)a0;
- (void)beginMonitor;
- (void)endMonitor;
- (double)containerWidthWithLargeFontAdapted;
- (double)containerHeightWithLargeFontAdapted;
- (double)iconWHWithLargeFontAdapted;
- (void)updateUIForStyleFullScreen;
- (double)fontSizeWithLargeFontAdapted;
- (void)updatePadGuideTagStyle;
- (void)traceRotateScreen;
- (double)bgViewCornerRadius;
- (void)updateStyle;
- (void).cxx_destruct;
- (void)orientationChanged:(id)a0;
- (id)init;
- (void)setHidden:(BOOL)a0;
- (void)reset;
- (void)dealloc;
- (void)initUI;

@end
