@class UILabel, UIView, UISwitch, NSArray, NSTimer, HTSEventContext, UIButton, NSString, UIPageControl, UIScrollView;

@interface IESLiveVREntranceView : UIView <UIScrollViewDelegate>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *switchContainerView;
@property (retain, nonatomic) UIView *separatorView;
@property (retain, nonatomic) UILabel *switchTitleLabel;
@property (retain, nonatomic) UISwitch *switchBtn;
@property (retain, nonatomic) UILabel *introLabel;
@property (retain, nonatomic) UIButton *introButton;
@property (retain, nonatomic) UILabel *guideLabel;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIPageControl *pageControl;
@property (copy, nonatomic) NSArray *originImageArray;
@property (copy, nonatomic) NSArray *usedImageArray;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (nonatomic) unsigned long long liveType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidTimer;
- (void)trackGuideShowWithContent:(id)a0;
- (id)initWithTrackContext:(id)a0 diContext:(id)a1;
- (void)setInitialSwitchStatus:(BOOL)a0;
- (void)handleSwitchClick:(id)a0;
- (void)showVRIntroBubbleView;
- (void)openVRLiveIntroURL;
- (void)addContentOffsetObserverToScrollView:(id)a0;
- (void)changeVRLiveSwitchStatus:(BOOL)a0;
- (void)trackClickDeviceNotSupportWithPopType:(id)a0 buttonType:(id)a1;
- (void)openVRLiveDeviceLimitURL;
- (void)trackShowDeviceNotSupportWithPopType:(id)a0;
- (void)trackFisheyeSwitchStatus:(BOOL)a0;
- (void)trackFisheyeInstanceClick;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)dealloc;
- (void)setupTimer;
- (void)setupUI;
- (void)scrollImage;

@end
