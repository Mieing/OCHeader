@class AWECodeGenSubcategoryModel, NSString, AWECodeGenCommonSubscribePopStModel, NSNumber, AWEMRSubscribeDoubleChannelPanelView;

@interface AWEMRSubscribeDoubleChannelPanelController : UIViewController <AWEMRSubscribePanelControllerProtocol>

@property (retain, nonatomic) AWECodeGenCommonSubscribePopStModel *originPopupModel;
@property (copy, nonatomic) NSNumber *isOriginContainSubscribed;
@property (retain, nonatomic) AWECodeGenCommonSubscribePopStModel *popupModel;
@property (retain, nonatomic) AWECodeGenSubcategoryModel *subcategory;
@property (retain, nonatomic) AWEMRSubscribeDoubleChannelPanelView *panelView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindEvent;
- (id)getPanelView;
- (id)initWithPopupModel:(id)a0;
- (void)bindModel;
- (void)leftValueDidChange;
- (void)rightValueDidChange;
- (void)handlePositiveButtonDidClick;
- (void)updateButtonStatus;
- (void)initializeButtonStatusWithChannel:(id)a0 checkBox:(id)a1 statusChangeCallback:(id /* block */)a2;
- (void).cxx_destruct;
- (void)setup;

@end
