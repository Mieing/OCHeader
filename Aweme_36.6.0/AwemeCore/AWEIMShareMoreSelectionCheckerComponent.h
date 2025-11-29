@class AWEIMShareListSelectUserController, NSString;
@protocol IESIMContactPickerSelectService;

@interface AWEIMShareMoreSelectionCheckerComponent : AWEIMComponentBase <AWEIMShareMoreSelectionCheckerInterface, IESIMContactPickerSelectChecker>

@property (nonatomic) long long maxSelectNum;
@property (retain, nonatomic) AWEIMShareListSelectUserController *selectUserController;
@property (weak, nonatomic) id<IESIMContactPickerSelectService> selectService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (BOOL)shouldSelectAndAutoToastShareModel:(id)a0;
- (id)contactPickerSelectService:(id)a0 canAddIdentifier:(id)a1;
- (long long)checkerPriorityForContactPickerSelectService:(id)a0;
- (id)p_makeSelectUserControllerWithContext:(id)a0;
- (void).cxx_destruct;

@end
