@class UIAlertController, FPStateFlow, NSObject, ACCAnimatedButton;
@protocol FPUIComponent, ACCMultiStyleAlertProtocol;

@interface AWERecordCloseViewHolder : NSObject <FPUIHolder>

@property (class, readonly, nonatomic) Class componentType;

@property (retain, nonatomic) FPStateFlow *stateFlow;
@property (retain, nonatomic) ACCAnimatedButton *closeButton;
@property (copy, nonatomic) id /* block */ backAlertConfig;
@property (retain, nonatomic) NSObject<ACCMultiStyleAlertProtocol> *backAlert;
@property (retain, nonatomic) UIAlertController *alertController;
@property (retain, nonatomic) id<FPUIComponent> typeErasedComponent;

- (void)onCloseButtonTap;
- (id)closeComponent;
- (void)updateCloseButtonStyle:(unsigned long long)a0 closeButton:(id)a1;
- (void)configAlertUIWithStyle:(unsigned long long)a0;
- (id /* block */)alertConfigWithoutAction;
- (id /* block */)exitActionConfig;
- (id /* block */)reShootActionConfig;
- (id /* block */)saveDraftActionConfig;
- (id /* block */)cancelActionConfig;
- (void)addStateFlowStateChanged;
- (void).cxx_destruct;
- (id)initWith:(id)a0;

@end
