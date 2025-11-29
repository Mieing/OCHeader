@class DUXNavigationBarConfigModel, NSString, NSArray, UILabel, UIView, NSMutableArray;
@protocol DUXNavigationBarAction;

@interface DUXNavigationBar : UIView <IESIMStandardNavigationBarProtocol, IESLLNavigationBarInterface>

@property (copy, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIView *iesll_containerView;
@property (retain, nonatomic) UILabel *iesll_titleLabel;
@property (copy, nonatomic) NSString *iesll_title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<DUXNavigationBarAction> backAction;
@property (retain, nonatomic) NSMutableArray *leftActionsArray;
@property (retain, nonatomic) NSMutableArray *rightActionsArray;
@property (nonatomic) double leftContainerWidth;
@property (nonatomic) double rightContainerWidth;
@property (nonatomic) double separatorLineHeight;
@property (retain, nonatomic) DUXNavigationBarConfigModel *uiConfig;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *contentContainerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *separatorLineView;
@property (retain, nonatomic) UIView *leftActionContainerView;
@property (retain, nonatomic) UIView *rightActionContainerView;
@property (nonatomic) BOOL enablePenetrateWhileBackgroundColorAlpha;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) unsigned long long enlargeType;
@property (nonatomic) BOOL isHeightFix;
@property (nonatomic) BOOL disableTitleEnlarge;
@property (readonly, copy, nonatomic) NSArray *leftActions;
@property (readonly, copy, nonatomic) NSArray *rightActions;

- (id)iesll_title;
- (void)setIesll_title:(id)a0;
- (id)iesll_titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 enlargeType:(unsigned long long)a1;
- (void)addRightAction:(id)a0;
- (void)addLeftAction:(id)a0;
- (void)removeAllRightAction;
- (void)setSeparatorLineViewHidden:(BOOL)a0;
- (void)addLeftActionWithText:(id)a0 onClickBlock:(id /* block */)a1;
- (void)addRightActionWithText:(id)a0 onClickBlock:(id /* block */)a1;
- (void)removeAllLeftAction;
- (id)iesll_containerView;
- (void)setIesll_containerView:(id)a0;
- (void)setIesll_titleLabel:(id)a0;
- (void)iesll_addLeftAction:(id)a0;
- (void)iesll_addRightAction:(id)a0;
- (void)iesll_removeAllLeftAction;
- (void)iesll_removeAllRightAction;
- (void)iesll_setSeparatorLineViewHidden:(BOOL)a0;
- (double)stackLengthWithActionsArray:(id)a0;
- (void)setSeperatorLineHeight:(double)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupViews;

@end
