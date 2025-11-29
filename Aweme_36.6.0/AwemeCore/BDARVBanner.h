@class UIImageView, NSString, NSTimer, BDARVSourceModel, BDARVADModel, UILabel, UIButton;
@protocol BDARVBannerDelegate;

@interface BDARVBanner : UIView

@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) UIButton *touchControl;
@property (nonatomic) unsigned long long loadState;
@property (retain, nonatomic) BDARVSourceModel *sourceModel;
@property (retain, nonatomic) BDARVADModel *adModel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UILabel *cornerLabel;
@property (nonatomic) double maxHeight;
@property (nonatomic) double minHeight;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } layoutFrame;
@property (retain, nonatomic) UIImageView *contentImageView;
@property (retain, nonatomic) UIImageView *cornerImageView;
@property (nonatomic) BOOL hasSendShow;
@property (nonatomic) BOOL hasSendShowOver;
@property (retain, nonatomic) NSString *tagString;
@property (weak, nonatomic) id<BDARVBannerDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *adUnitID;
@property (readonly, copy, nonatomic) NSString *creatorId;

+ (id)bannerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 maxHeight:(double)a1 minHeight:(double)a2 source:(id)a3 delegate:(id)a4 shouldLoad:(BOOL)a5;
+ (id)bannerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 source:(id)a1 delegate:(id)a2 config:(id)a3;
+ (id)bannerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 source:(id)a1 delegate:(id)a2 shouldLoad:(BOOL)a3;

- (void)closeAction:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 source:(id)a1;
- (void)clickTimeMonitor;
- (void)tapAction:(id)a0 forEvent:(id)a1;
- (void)resizeLayout;
- (void)sendBannerEventWithLabel:(id)a0;
- (void)layoutWithOrigin:(struct CGPoint { double x0; double x1; })a0;
- (void)layoutWithWidth:(double)a0;
- (void)layoutWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)hide;
- (void)loadImage;
- (void)layoutSubviews;
- (void)dealloc;
- (void)show;
- (void)loadContent;
- (void)updateUI:(id)a0;

@end
