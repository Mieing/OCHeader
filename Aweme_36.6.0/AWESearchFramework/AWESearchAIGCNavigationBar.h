@class UIControl, BDImageView, NSString, UILabel, UIButton;
@protocol AWESearchAIGCNavigationBarDelegate;

@interface AWESearchAIGCNavigationBar : UIView <AWESearchAIGCNavigationBarProtocol>

@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UIButton *moreButton;
@property (retain, nonatomic) UIButton *conversationButton;
@property (retain, nonatomic) BDImageView *titleRegion;
@property (retain, nonatomic) UIControl *titleRegionCtl;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) BOOL showTitleRegion;
@property (weak, nonatomic) id<AWESearchAIGCNavigationBarDelegate> delegate;
@property (nonatomic) unsigned long long transitionType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

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
- (id)conversationImage;
- (void)conversationClick;
- (void)titleRegionClick;
- (id)mainIconImage;
- (void)titleRegionShow;
- (void)cancelShareButtonAction;
- (void)setTitleRegionWithUrls:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleRegionFrame;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)createUI;

@end
