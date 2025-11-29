@class AWEMRSubscribeMultiCategoryPanelView, NSString, AWECodeGenCommonSubscribePopStModel, NSNumber;

@interface AWEMRSubscribeMultiCategoryPanelController : UIViewController <AWEMRSubscribePanelControllerProtocol>

@property (retain, nonatomic) AWECodeGenCommonSubscribePopStModel *originPopupModel;
@property (copy, nonatomic) NSNumber *isOriginContainSubscribed;
@property (retain, nonatomic) AWECodeGenCommonSubscribePopStModel *popupModel;
@property (retain, nonatomic) AWEMRSubscribeMultiCategoryPanelView *panelView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindEvent;
- (id)getPanelView;
- (id)initWithPopupModel:(id)a0;
- (void)bindModel;
- (void)handlePositiveButtonDidClick;
- (void)updateButtonStatus;
- (void).cxx_destruct;
- (void)setup;

@end
