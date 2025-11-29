@class UIFont, NSMutableArray, UIView;

@interface AWEFeedUserActionSheetView : UIView <AWEFeedUserActionSheetViewProtocol>

@property (retain, nonatomic) NSMutableArray *actions;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *backgroundView;
@property (copy, nonatomic) id /* block */ cancelHandler;
@property (copy, nonatomic) id /* block */ btmRecordBlock;
@property (retain, nonatomic) UIFont *defaultTitleFont;
@property (nonatomic) unsigned long long viewStyle;
@property (nonatomic) unsigned long long animationStyle;
@property (retain, nonatomic) UIView *footerView;
@property (nonatomic) double footerHeight;

+ (BOOL)isSomeActionSheetShowing;
+ (Class)aAWEPadBizUIAdapterClass;
+ (id)instanceWithActions:(id)a0 cancelHandler:(id /* block */)a1;

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
- (id)setupFooterView:(id)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (void)addAction:(id)a0;
- (void)closeAction;
- (void)cancelAction;
- (id)init;
- (void)show;
- (void)dismiss:(id /* block */)a0;

@end
