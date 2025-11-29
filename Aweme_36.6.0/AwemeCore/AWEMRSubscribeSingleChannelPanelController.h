@class AWECodeGenSubcategoryModel, AWEMRSubscribeSingleChannelPanelView, AWECodeGenCommonSubscribePopStModel, NSString;

@interface AWEMRSubscribeSingleChannelPanelController : UIViewController <AWEMRSubscribePanelControllerProtocol>

@property (retain, nonatomic) AWECodeGenCommonSubscribePopStModel *originPopupModel;
@property (retain, nonatomic) AWECodeGenCommonSubscribePopStModel *popupModel;
@property (retain, nonatomic) AWECodeGenSubcategoryModel *subcategory;
@property (retain, nonatomic) AWEMRSubscribeSingleChannelPanelView *panelView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindEvent;
- (id)getPanelView;
- (id)initWithPopupModel:(id)a0;
- (void)bindModel;
- (BOOL)isSubscribePanel;
- (void)handleRequestWithCurrentSubscribeStatus:(long long)a0;
- (BOOL)hasOptionView;
- (void)handleWithOptionViewConfirmClick;
- (void).cxx_destruct;
- (void)setup;
- (id)originChannel;

@end
