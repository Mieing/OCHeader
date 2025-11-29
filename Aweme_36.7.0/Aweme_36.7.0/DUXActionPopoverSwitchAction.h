@class NSString;

@interface DUXActionPopoverSwitchAction : DUXActionPopoverBaseAction <IESIMActionPopoverSwitchActionProtocol>

@property (readonly, nonatomic) BOOL isOn;
@property (nonatomic) BOOL enable;
@property (copy, nonatomic) NSString *disableText;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isOn;
@property (readonly, copy, nonatomic) NSString *title;
@property (nonatomic) BOOL enable;
@property (copy, nonatomic) NSString *disableText;
@property (readonly, copy, nonatomic) id /* block */ switchAction;
@property (nonatomic) BOOL autoDismissWhileSwitchValueChange;

+ (id)actionWithTitle:(id)a0 isOn:(BOOL)a1 switchAction:(id /* block */)a2;

- (id)initWithTitle:(id)a0 isOn:(BOOL)a1 switchAction:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end
