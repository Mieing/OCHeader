@class NSArray, AWEIMComponentManager;

@interface IESIMMultiTopFloatingTipsDataComponent : AWEIMComponentBase <AWEIMComponentManagerDependency, AWEIMComponentContainer, IESIMMultiTopFloatingTipsDataInterface, IESIMConvFloatingBarDataAction, NSObject> {
    void /* function */ viewModels;
    void /* unknown type, empty encoding */ uniqueIdToViewModelDict;
    void /* unknown type, empty encoding */ typeToPriorityDict;
    void /* unknown type, empty encoding */ uidToFromUserViewModelDict;
    void /* unknown type, empty encoding */ uidToUniqueIdsDict;
    void /* unknown type, empty encoding */ uidToDisplayNameDict;
    void /* unknown type, empty encoding */ configsModel;
    void /* unknown type, empty encoding */ topFloatingTipsTracker;
    void /* unknown type, empty encoding */ uniqueIdToUserBarDataModelList;
    void /* unknown type, empty encoding */ conUserInfoBinding;
    void /* unknown type, empty encoding */ typeToProviderDict;
    void /* unknown type, empty encoding */ convFloatingBarDataService;
}

@property (nonatomic, copy) NSArray *viewModels;
@property (nonatomic, retain) AWEIMComponentManager *componentManager;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (id)componentContext;
- (id)componentsNameArrayWithContext:(id)a0;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (id)getSortedModelsWithType:(long long)a0;
- (void)removeTopFloatingTipViewModelWithUniqueIds:(id)a0;
- (void)titleTextChangedWithUniqueId:(id)a0 titleText:(id)a1;
- (void)convFloatingBarDataChangedWithChangedContext:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
