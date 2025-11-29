@class NSString, AWEECGYLSectionViewModel, NSDictionary, UIView;
@protocol IESECMallRecommendViewProtocol;

@interface AWEECGYLFoldViewSlot : BDXLynxFoldViewSlotLight <IESECGYLSectionViewModelDelegate>

@property (nonatomic, getter=isHide) BOOL hide;
@property (copy, nonatomic) NSString *pageName;
@property (copy, nonatomic) NSString *gylID;
@property (retain, nonatomic) AWEECGYLSectionViewModel *svm;
@property (retain, nonatomic) UIView<IESECMallRecommendViewProtocol> *slotView;
@property (retain, nonatomic) NSDictionary *passParams;
@property (retain, nonatomic) NSDictionary *logExtra;
@property (nonatomic) BOOL targetFirstOnScreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)__lynx_prop_config__1420;
+ (id)__lynx_prop_config__1471;
+ (id)__lynx_prop_config__1512;
+ (id)__lynx_prop_config__1553;
+ (id)__lynx_prop_config__1594;

- (void)updateFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withPadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 border:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 margin:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a3 withLayoutAnimation:(BOOL)a4;
- (void)finishLayoutOperation;
- (void)propsDidUpdate;
- (void)targetOnScreen;
- (void)targetOffScreen;
- (void)configSectionViewModel:(id)a0;
- (void)recommendViewVisibilityChangeIfNeeded;
- (id)passParamsForRequest;
- (id)logExtraForTrackReport;
- (void)setHide:(BOOL)a0 requestReset:(BOOL)a1;
- (void)setPageName:(id)a0 requestReset:(BOOL)a1;
- (void)setGYLID:(id)a0 requestReset:(BOOL)a1;
- (void)setPassParams:(id)a0 requestReset:(BOOL)a1;
- (void)setLogExtra:(id)a0 requestReset:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (void)scrollViewDidEndScrolling;
- (void)insertChild:(id)a0 atIndex:(long long)a1;
- (id)createView;

@end
