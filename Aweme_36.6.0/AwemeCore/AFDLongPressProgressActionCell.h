@class UIColor, CAShapeLayer, AFDLongPressContext, UILabel, UIView;

@interface AFDLongPressProgressActionCell : AWEAwemeLongPressActionCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) UIView *highlightMaskView;
@property (nonatomic) BOOL enableDynamicTheme;
@property (retain, nonatomic) UIView *progressView;
@property (retain, nonatomic) CAShapeLayer *loadingLayer;
@property (retain, nonatomic) CAShapeLayer *fullProgressLayer;
@property (retain, nonatomic) AFDLongPressContext *context;
@property (nonatomic) BOOL isDownloading;
@property (nonatomic) double progress;

- (void)updateDynamicTheme:(BOOL)a0;
- (id)getMaskLayer;
- (void)setupDownloadingUI;
- (void)setupNormalUI;
- (void)updateLayout:(id)a0 isDownloading:(BOOL)a1;
- (void)updateTitle:(id)a0 titleColor:(id)a1;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;

@end
