@class NSString;

@interface BDPHostPanelContentBaseControllerButtonListModel : BDPBasePluginModel

@property (readonly, copy, nonatomic) NSString *confirmText;
@property (readonly, copy, nonatomic) NSString *cancelText;

- (id)initWithConfirmText:(id)a0 cancelText:(id)a1;
- (void).cxx_destruct;

@end
