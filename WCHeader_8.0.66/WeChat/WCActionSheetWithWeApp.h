@class NSString, NSArray, UILabel, NSMutableArray, UIView;

@interface WCActionSheetWithWeApp : WCActionSheet

@property (retain, nonatomic) NSMutableArray *m_WeAppItemList;
@property (retain, nonatomic) NSMutableArray *m_WeAppIconList;
@property (retain, nonatomic) UIView *weAppSheetView;
@property (retain, nonatomic) UILabel *weAppOpLabel;
@property (retain, nonatomic) NSString *weAppButtonTitle;
@property (readonly, nonatomic) NSArray *weAppDatas;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWeAppItemDatas:(id)a0;
- (void)updateWeAppIcons;
- (id)getWeAppIcon;
- (void)reloadInnerView;
- (void)onSheetItem:(id)a0 makeView:(id)a1;
- (void)resetWeAppIcons;
- (void).cxx_destruct;

@end
