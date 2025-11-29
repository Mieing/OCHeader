@class NSString, UISwitch, NSDictionary, AWEECOMIMNetworkImp;

@interface AWEECOMIMSuggestSettingController : UIViewController <DUXSheetDelegate>

@property (retain, nonatomic) UISwitch *suggestSwitch;
@property (retain, nonatomic) NSString *shopID;
@property (copy, nonatomic) NSDictionary *requestCommonParams;
@property (weak, nonatomic) AWEECOMIMNetworkImp *networkImp;
@property (copy, nonatomic) id /* block */ switchChanged;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setInputSuggestConfigWithShopID:(id)a0 isOn:(BOOL)a1 requestCommonParams:(id)a2 networkImp:(id)a3 completion:(id /* block */)a4;

- (id)dux_titleForColoseButton;
- (id)initWithShopID:(id)a0 requestCommonParams:(id)a1 networkImp:(id)a2;
- (void)updateSuggestSwitchState:(BOOL)a0;
- (void)updateSuggestSwitchStateToServer:(BOOL)a0;
- (void)onSwitchChanged:(id)a0;
- (void)setInputSuggestConfigWithIsOn:(BOOL)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
