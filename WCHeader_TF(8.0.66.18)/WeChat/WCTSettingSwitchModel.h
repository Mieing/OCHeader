@interface WCTSettingSwitchModel : WCTBaseSettingModel

@property (nonatomic) BOOL on;
@property (copy, nonatomic) id /* block */ switchAction;

+ (id)createWithTitle:(id)a0 on:(BOOL)a1;

- (void).cxx_destruct;

@end
