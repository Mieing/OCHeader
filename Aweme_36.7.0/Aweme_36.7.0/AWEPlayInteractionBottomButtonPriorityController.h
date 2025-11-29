@class NSMapTable, NSPointerArray, NSArray, NSString, AWEPlayInteractionBaseElement;
@protocol AWEPlayInteractionBottomButtonPriorityProtocol;

@interface AWEPlayInteractionBottomButtonPriorityController : AWEPlayInteractionBaseController <AWEPlayInteractionBottomButtonPriorityControllerProtocol>

@property (retain, nonatomic) NSPointerArray *allButtonElements;
@property (retain, nonatomic) NSMapTable *buttonMapTable;
@property (weak, nonatomic) AWEPlayInteractionBaseElement<AWEPlayInteractionBottomButtonPriorityProtocol> *currentButtonElement;
@property (copy, nonatomic) NSArray *specialHandlers;
@property (copy, nonatomic) NSArray *commonHandlers;
@property (nonatomic) long long currentPriority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleSpecialButtonPriority:(id)a0;
- (unsigned long long)handleCommonButtonPriority:(id)a0;
- (void)setupSpecialButtonHandlers;
- (void)setupCommonButtonHandlers;
- (void)handleButtonPriority:(id)a0;
- (BOOL)shouldActivateButtonWithElementName:(id)a0;
- (BOOL)shouldActivateButtonWithHandlerName:(id)a0;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)reset;
- (void)resetCache;
- (void)viewDidLoad;

@end
