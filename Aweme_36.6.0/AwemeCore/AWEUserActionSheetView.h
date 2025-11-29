@class UIFont, NSString, UIView, NSMutableArray;

@interface AWEUserActionSheetView : UIView <IESIMActionSheetProtocol, AWEMRGlobalAlertTrackProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableArray *actions;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *backgroundView;
@property (copy, nonatomic) id /* block */ cancelHandler;
@property (copy, nonatomic) id /* block */ btmRecordBlock;
@property (retain, nonatomic) UIFont *defaultTitleFont;
@property (nonatomic) unsigned long long viewStyle;
@property (nonatomic) unsigned long long animationStyle;

+ (BOOL)isSomeActionSheetShowing;
+ (Class)aAWEPadBizUIAdapterClass;
+ (void)messageReach_alertTrackerLoad;
+ (id)instanceWithActions:(id)a0 cancelHandler:(id /* block */)a1;

- (void)applyBlurEffectAndWhiteText;
- (void)layoutSubviews;
- (id)messageReach_title;
- (void)showOnView:(id)a0;
- (id)generateLineView;
- (id)aAWEPadBizUIAdapter;
- (void)fadeOutAnimation:(id /* block */)a0;
- (void)clickAction:(id)a0;
- (void)tapMaskAction;
- (void)reloadUI;
- (void)doShowAnimation:(id /* block */)a0;
- (void)doHideAnimation:(id /* block */)a0;
- (void)setupPanelSubviews:(id)a0;
- (void)fadeInAnimation:(id /* block */)a0;
- (void)defaultShowAnimation:(id /* block */)a0;
- (void)defaultHideAnimation:(id /* block */)a0;
- (void)setMr_didRegisterActionListener:(id)a0;
- (id)mr_didRegisterActionListener;
- (void)messageReach_showOnView:(id)a0;
- (void)messageReach_dismiss:(id /* block */)a0;
- (void)messageReach_clickAction:(id)a0;
- (void)messageReach_cancelAction;
- (void)messageReach_closeAction;
- (void)messageReach_tapMaskAction;
- (void)dismiss;
- (void).cxx_destruct;
- (void)addAction:(id)a0;
- (void)closeAction;
- (void)cancelAction;
- (id)init;
- (void)show;
- (void)dismiss:(id /* block */)a0;
- (void)insertAction:(id)a0 atIndex:(long long)a1;

@end
