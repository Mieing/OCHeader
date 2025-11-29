@class UIControl, BDImageView, UILabel, UIButton;
@protocol AWESearchAIGCNaviViewDelegate;

@interface AWESearchAIGCNaviView : UIView

@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UIButton *moreButton;
@property (retain, nonatomic) UIButton *voiceBroadcastButton;
@property (retain, nonatomic) BDImageView *titleRegion;
@property (retain, nonatomic) UIControl *titleRegionCtl;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) BOOL showTitleRegion;
@property (weak, nonatomic) id<AWESearchAIGCNaviViewDelegate> delegate;
@property (nonatomic) unsigned long long transitionType;

+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;

- (void)backClick;
- (void)themeChange;
- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (id)leftIconImage;
- (void)moreClick;
- (id)rightIconImage;
- (void)p_bindActions;
- (void)shareBegin;
- (void)shareEnd;
- (void)addShareNoti;
- (void)titleRegionClick;
- (id)mainIconImage;
- (void)titleRegionShow;
- (void)cancelShareButtonAction;
- (void)setTitleRegionWithUrls:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleRegionFrame;
- (void)setButtonImage;
- (void)voiceBroadcastClick;
- (id)voiceBroadcastUnSelectImage;
- (id)voiceBroadcastSelectImage;
- (void)setVoiceBroadcastEnable:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)loadImage;
- (void)dealloc;
- (void)createUI;

@end
