@class NSArray, NSString, NSRecursiveLock;

@interface IESIMContactPickerSelectComponent : AWEIMComponentBase <IESIMContactPickerSelectService, IESIMContactPickerSelectChecker>

@property (copy) NSArray *selects;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)componentContext;
- (id)listContext;
- (void)componentDidMounted:(id)a0;
- (id)canAddSelectedIdentifier:(id)a0;
- (id)canRemoveSelectedIdentifier:(id)a0;
- (id)addSelectedIdentifiers:(id)a0;
- (id)removeSelectedIdentifier:(id)a0;
- (id)toggleSelectedIdentifier:(id)a0;
- (id)currentSelects;
- (BOOL)containIdentifier:(id)a0;
- (id)addSelectedIdentifier:(id)a0;
- (void)__log:(id)a0;
- (id)contactPickerSelectService:(id)a0 canAddIdentifier:(id)a1;
- (id)contactPickerSelectService:(id)a0 canRemoveIdentifier:(id)a1;
- (long long)checkerPriorityForContactPickerSelectService:(id)a0;
- (void)__setup;
- (void)__initiateSelectList;
- (void)__addStickOnTopUidsIfNeeded;
- (void)__addDefaultSelectUidsIfNeeded;
- (id)__addSelectedIdentifiers:(id)a0 publishAction:(BOOL)a1;
- (id)__getSortedCheckers;
- (id)__addSelectedIdentifier:(id)a0 publishAction:(BOOL)a1;
- (void).cxx_destruct;

@end
