@class NSString, NSDictionary, AWESearchLocationViewController, UIView;

@interface AWEPOILiveLocationSelectorViewController : UIViewController <AWESearchLocationViewControllerDelegate>

@property (nonatomic) unsigned long long scene;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSString *poiID;
@property (copy, nonatomic) id /* block */ didDismissBlock;
@property (copy, nonatomic) id /* block */ poiIDDidChangBlock;
@property (retain, nonatomic) UIView *markView;
@property (retain, nonatomic) UIView *modalView;
@property (retain, nonatomic) AWESearchLocationViewController *searchLocationVC;
@property (retain, nonatomic) UIView *titleBar;
@property (nonatomic) BOOL animating;
@property (nonatomic) BOOL didTrackShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)panAction:(id)a0;
- (id)initWithScene:(unsigned long long)a0 params:(id)a1 poiIDDidChangeBlock:(id /* block */)a2 didDismissBlock:(id /* block */)a3;
- (void)createMarkView;
- (void)createModalView;
- (void)createTitleBar;
- (void)createSearchLocationViewController;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })markViewFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })modalViewFrame;
- (void)didSelectedPoi:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })searchLocationVCFrame;
- (void)modalWithCompletion:(id /* block */)a0;
- (void)trackSelectedPoi:(id)a0 searchKey:(id)a1;
- (void)trackPoiLoactionPanelShow:(BOOL)a0;
- (void)trackShowSheet;
- (void)trackClickSheetAction:(BOOL)a0;
- (id)utCommonParams;
- (void)didLoadData:(id)a0 searchDomain:(long long)a1 bySearch:(BOOL)a2 dataList:(id)a3;
- (void)willShowSheet:(id)a0 searchDomain:(long long)a1;
- (void)didClickSheetAction:(id)a0 searchDomain:(long long)a1 isConfirm:(BOOL)a2;
- (void).cxx_destruct;
- (void)willMoveToParentViewController:(id)a0;
- (void)dismissWithCompletion:(id /* block */)a0;
- (void)viewDidLoad;
- (void)tapAction:(id)a0;

@end
