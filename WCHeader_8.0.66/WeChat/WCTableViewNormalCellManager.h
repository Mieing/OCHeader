@class NSString, WCTableViewCellNormalConfig;

@interface WCTableViewNormalCellManager : WCTableViewCellManager <ILinkEventExt> {
    double titleRight;
}

@property (nonatomic) unsigned long long dr_reportPolicy;
@property (nonatomic) unsigned long long dr_routeRule;
@property (nonatomic) BOOL dr_isRtReport;
@property (retain, nonatomic) WCTableViewCellNormalConfig *cellConfig;
@property (copy, nonatomic) NSString *dr_viewId;
@property (copy, nonatomic) id /* block */ dr_dynamicParamsBlock;
@property (copy, nonatomic) id /* block */ longPressAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)accessoryType:(long long)a0;
+ (id)cellForMakeSel:(SEL)a0 makeTarget:(id)a1 height:(double)a2 userInfo:(id)a3;
+ (id)normalCellForSel:(SEL)a0 target:(id)a1 title:(id)a2 rightValue:(id)a3 accessoryType:(long long)a4;
+ (id)normalCellForSel:(SEL)a0 target:(id)a1 title:(id)a2 rightValue:(id)a3 accessoryType:(long long)a4 pathKey:(id)a5;
+ (id)normalCellForSel:(SEL)a0 target:(id)a1 title:(id)a2 rightValue:(id)a3 imageName:(id)a4 accessoryType:(long long)a5;
+ (id)normalCellForSel:(SEL)a0 target:(id)a1 title:(id)a2 detail:(id)a3 imageName:(id)a4 accessoryType:(long long)a5;
+ (id)normalCellForSel:(SEL)a0 target:(id)a1 title:(id)a2 detail:(id)a3 image:(id)a4 accessoryType:(long long)a5;
+ (id)normalCellForSel:(SEL)a0 target:(id)a1 title:(id)a2 accessoryType:(long long)a3;
+ (id)normalCellForTitle:(id)a0 rightValue:(id)a1;
+ (id)editorCellForSel:(SEL)a0 target:(id)a1 title:(id)a2 tip:(id)a3 focus:(BOOL)a4 autoCorrect:(BOOL)a5 text:(id)a6;
+ (id)badgeCellForSel:(SEL)a0 target:(id)a1 title:(id)a2 badge:(id)a3;
+ (id)badgeCellForSel:(SEL)a0 target:(id)a1 title:(id)a2 badge:(id)a3 pathKey:(id)a4;
+ (double)getAutoSizingRightMargin:(id)a0;
+ (id)urlInnerBlueCellForTitle:(id)a0 rightValue:(id)a1 url:(id)a2;
+ (id)urlInnerCellForTitle:(id)a0 url:(id)a1;

- (void)addUserInfoValue:(id)a0 forKey:(id)a1;
- (id)getUserInfoValueForKey:(id)a0;
- (void)actionEditorCell:(id)a0;
- (void)actionUrlInnerCell;
- (void)makeEditorCell:(id)a0;
- (id)init;
- (id /* block */)dr_setViewReportPolicy;
- (void)setCell:(id)a0;
- (void)configureCell:(id)a0;
- (double)cellHeightFor:(id)a0;
- (double)cellSeparatorLeftInset;
- (double)cellSeperateLineRightInset;
- (double)getLeftLabelLeft;
- (double)getLeftLabelMaxWidth:(double)a0;
- (double)getTitleRight;
- (double)getRightLabelMaxWidth:(double)a0;
- (double)getRightConfigStaticLeft:(double)a0;
- (double)getLeftConfigRight:(double)a0;
- (void)configureCell:(id)a0 withLeftConfig:(id)a1;
- (void)configureCell:(id)a0 withRightConfig:(id)a1;
- (double)getSmallIconLeftMargin;
- (void)switchDidChanged:(id)a0;
- (void)onLongPress:(id)a0;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
