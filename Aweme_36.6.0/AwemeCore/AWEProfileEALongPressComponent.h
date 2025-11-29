@class NSNumber, DUXPopover, NSString;

@interface AWEProfileEALongPressComponent : AWEProfileEABaseController <AWEProfileEACardLifeCycleEvent>

@property (retain, nonatomic) DUXPopover *popover;
@property (retain, nonatomic) NSNumber *index;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cardDidLoadAtIndexPath:(id)a0;
- (void)addLongPressGestureOnCardIfNeeded:(id)a0 indexPath:(id)a1;
- (BOOL)__showPopoverOnView:(id)a0;
- (void)__trackEventWithName:(id)a0;
- (id)__cardModelAtSelectedIndex;
- (BOOL)shouldOnlyAllowRemove;
- (id)__getContentView:(id)a0;
- (void)__addSingleButton:(id)a0 buttonType:(unsigned long long)a1;
- (id)__getButtonWithType:(unsigned long long)a0;
- (void)__reorderButtonClicked:(id)a0;
- (void)__removeButtonClicked:(id)a0;
- (void)__removeCardAtIndex:(long long)a0 completion:(id /* block */)a1;
- (id)__showCards;
- (id)__filteredShowCards;
- (void).cxx_destruct;
- (void)feedbackGenerator;
- (void)viewDidLoad;
- (void)handleLongPressGesture:(id)a0;

@end
