@class IESIMContactPickerPageSwitchConfig, NSString, NSDictionary, UIView, IESIMContactPickerViewController, AWEIMGroupListSortingTitleView;

@interface IESIMContactPickerSwitchableContentComponent : AWEIMComponentBase <IESIMContactPickerSelectAction, IESIMContactPickerContentService, IESIMContactPickerSwitchableComponentAction, IESIMContactPickerComponentViewProvider>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) NSDictionary *childVCInfo;
@property (copy, nonatomic) NSString *conversationID;
@property (nonatomic) long long currentIndex;
@property (retain, nonatomic) IESIMContactPickerViewController *defaultVC;
@property (retain, nonatomic) AWEIMGroupListSortingTitleView *sortingTitleView;
@property (retain, nonatomic) IESIMContactPickerPageSwitchConfig *switchConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })emptyPageEdgeInsets;
- (void)updateConfig:(id)a0;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (id)emptyPageConfigForState:(unsigned long long)a0 emptyPage:(id)a1;
- (void)emptyPagePrimaryButtonTapped:(id)a0;
- (void)contactPickerSelectService:(id)a0 didAddSelectIdentifiers:(id)a1;
- (void)contactPickerSelectService:(id)a0 didRemoveSelectIdentifier:(id)a1;
- (id)pageSwitchConfig;
- (id)naviBarConfig;
- (BOOL)shouldShowNaviBar;
- (id)makeIdentifierForCellModel:(id)a0 extraInfo:(id)a1;
- (void)onSwitchIndex:(long long)a0;
- (void).cxx_destruct;
- (id)componentView;

@end
