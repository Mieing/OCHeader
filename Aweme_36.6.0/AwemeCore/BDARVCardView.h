@class UIColor, NSString, BDARVADModel, UIButton, BDARVSourceModel, BDARVPatchADModel, UIImageView, NSDictionary, UILabel, BDARVFeedADModel;
@protocol BDARVCardViewProtocol;

@interface BDARVCardView : UIView <BDARCardViewTypeProtocol>

@property (nonatomic) double scaleRate;
@property (nonatomic) unsigned long long loadState;
@property (retain, nonatomic) BDARVSourceModel *sourceModel;
@property (retain, nonatomic) BDARVADModel *adModel;
@property (nonatomic) double imageHeight;
@property (nonatomic) double imageWidth;
@property (retain, nonatomic) BDARVFeedADModel *feedAdModel;
@property (retain, nonatomic) BDARVPatchADModel *patchAdModel;
@property (copy, nonatomic) NSString *refer;
@property (nonatomic) BOOL hasSendShow;
@property (nonatomic) BOOL hasSendShowOver;
@property (weak, nonatomic) id<BDARVCardViewProtocol> innerDelegate;
@property (readonly, copy, nonatomic) NSString *adUnitID;
@property (readonly, copy, nonatomic) NSString *creatorId;
@property (retain, nonatomic) UIButton *touchControl;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIButton *reportButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *sourceLabel;
@property (retain, nonatomic) UIImageView *playImageView;
@property (retain, nonatomic) UILabel *durationLabel;
@property (retain, nonatomic) UIImageView *contentImageView;
@property (retain, nonatomic) UILabel *cornerLabel;
@property (retain, nonatomic) UIButton *actionButton;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } layoutFrame;
@property (nonatomic) BOOL isVideoMute;
@property (copy, nonatomic) UIColor *btnHighlightColor;
@property (copy, nonatomic) UIColor *btnNormalColor;
@property (copy, nonatomic) NSDictionary *playerConfig;

+ (id)cardViewWithSource:(id)a0 feedAdModel:(id)a1 delegate:(id)a2;
+ (id)cardViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 displayType:(long long)a1 source:(id)a2 delegate:(id)a3;
+ (id)cardViewWithSource:(id)a0 patchAdModel:(id)a1 displayType:(long long)a2 delegate:(id)a3;

- (void)closeAction:(id)a0;
- (void)hideCloseBtn;
- (BOOL)isVerticalVideo;
- (void)pureMonitorWithEvent:(id)a0 param:(id)a1;
- (void)sendShowEvent;
- (void)clickTimeMonitor;
- (void)tapAction:(id)a0 forEvent:(id)a1;
- (void)resizeLayout;
- (void)layoutWithOrigin:(struct CGPoint { double x0; double x1; })a0;
- (void)layoutWithWidth:(double)a0;
- (void)layoutWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)sendCardViewEventWithLabel:(id)a0;
- (void)sendCardViewEventWithTag:(id)a0 label:(id)a1 refer:(id)a2;
- (void)sendCardViewEventWithTag:(id)a0 label:(id)a1 refer:(id)a2 adExtra:(id)a3;
- (void)playerHitCache:(double)a0 rewardAdType:(unsigned long long)a1;
- (void)remuse;
- (void)reportAction:(id)a0;
- (void)actionBtnClick:(id)a0 forEvent:(id)a1;
- (struct CGSize { double x0; double x1; })titleFrameSize:(double)a0;
- (void)sendShowOverEvent:(id)a0;
- (void)setupSubview;
- (void)close;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)stop;
- (void)hide;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)loadImage;
- (BOOL)hasVideo;
- (void)dealloc;
- (void)show;
- (void)enterFullScreen;
- (void)exitFullScreen;
- (void)updateUI:(id)a0;

@end
