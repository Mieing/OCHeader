@class AWEIMRecallMessage, IESIMGrowingTextView, NSString;

@interface IESIMInputReEdittingComponent : AWEIMComponentBase <IESIMInputReEdittingComponentInterface, AWEIMComponentLazyCreate>

@property (retain, nonatomic) AWEIMRecallMessage *recalledMessage;
@property (retain, nonatomic) IESIMGrowingTextView *textView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lazyComponentWakeupInterface;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)reEditRecalledMessage:(id)a0 keyboardShow:(BOOL)a1;
- (void)configReEditRecalledMessage:(id)a0 keyboardShow:(BOOL)a1;
- (void).cxx_destruct;
- (BOOL)isEditing;

@end
