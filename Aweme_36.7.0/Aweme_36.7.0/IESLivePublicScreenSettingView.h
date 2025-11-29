@class IESLiveSlideButton, UIView, HTSEventContext, NSString, UIImageView, UITableView, IESLiveButton, NSMutableArray, CAGradientLayer, UILabel, IESLiveCustomButton;

@interface IESLivePublicScreenSettingView : UIView <UITableViewDelegate, UITableViewDataSource, IESLiveSlideButtonDelegate>

@property (nonatomic) BOOL beforeLive;
@property (retain, nonatomic) NSMutableArray *section;
@property (nonatomic) unsigned long long curHeightType;
@property (nonatomic) unsigned long long lastHeightType;
@property (nonatomic) unsigned long long curFontSizeType;
@property (nonatomic) unsigned long long lastFontSizeType;
@property (nonatomic) double fontSize;
@property (nonatomic) double expendHeight;
@property (nonatomic) double constHeight;
@property (nonatomic) double messageListWidth;
@property (retain, nonatomic) IESLiveCustomButton *doneBtn;
@property (retain, nonatomic) IESLiveButton *closeBtn;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) IESLiveSlideButton *heightSettingBtn;
@property (retain, nonatomic) IESLiveSlideButton *fontSizeSettingBtn;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIImageView *highValueAreaView;
@property (retain, nonatomic) UIView *bottomBlackView;
@property (retain, nonatomic) CAGradientLayer *gradientMaskLayer;
@property (nonatomic) double blackAreaTop;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (copy, nonatomic) id /* block */ closeButtonClicked;
@property (copy, nonatomic) id /* block */ doneButtonClicked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)getFontSizeWithFontSizeType:(unsigned long long)a0 isAnchor:(BOOL)a1;
+ (id)getHeightStrWithHeightType:(unsigned long long)a0;

- (void)layoutCloseButton;
- (void)layoutDoneButton;
- (id)initWithDIContext:(id)a0 beforeLive:(BOOL)a1;
- (void)setBottomViewColor:(id)a0;
- (void)disableHeightSettingWithToast:(id)a0;
- (void)checkIfEnableHeightSetting;
- (double)bottomViewTop;
- (void)curPointChanged:(double)a0 button:(id)a1;
- (void)trackWhenDoneButtonClicked;
- (void)trackWhenCloseButtonClicked;
- (void)setTopMaskHeight:(double)a0;
- (void)setBlackAreaWithOriginy:(double)a0;
- (BOOL)isAnchorHorizontalScene;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getAnchorStreamFrame;
- (void)addSubviewCloseButton;
- (void)addSubviewDoneButton;
- (id)createGiftAttributedString;
- (id)createMemberAttributedString;
- (id)createSocialAttributedString;
- (id)createAttributedString;
- (void)curOptionChanged:(long long)a0 button:(id)a1;
- (void)close;
- (void)dismiss;
- (void).cxx_destruct;
- (void)done;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)show;
- (void)setupUI;
- (void)setTableViewHeight:(double)a0;
- (void)setupConfig;

@end
