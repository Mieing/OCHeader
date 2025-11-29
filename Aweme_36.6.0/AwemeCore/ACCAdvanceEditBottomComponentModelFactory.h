@class DVEVCContext, ACCAdvanceEditBottomComponentConfig;
@protocol ACCAdvanceEditViewModelProtocol;

@interface ACCAdvanceEditBottomComponentModelFactory : NSObject

@property (weak, nonatomic) DVEVCContext *context;
@property (weak, nonatomic) id<ACCAdvanceEditViewModelProtocol> editViewModel;
@property (retain, nonatomic) ACCAdvanceEditBottomComponentConfig *componentConfig;

+ (id)createComponentModelWithType:(long long)a0 imageName:(id)a1 title:(id)a2 actionName:(id)a3 targetActionContext:(id)a4 disableVisible:(BOOL)a5 parent:(id)a6;
+ (id)createComponentModelWithType:(long long)a0 viewModel:(id)a1 componentGroup:(long long)a2 actionName:(id)a3 targetActionContext:(id)a4 disableVisible:(BOOL)a5 parent:(id)a6;
+ (id)createComponentModelWithType:(long long)a0 configDict:(id)a1 parent:(id)a2;

- (id)createComponentWithType:(long long)a0 parent:(id)a1 createSubComponent:(BOOL)a2;
- (id)createComponentWithType:(long long)a0 viewModel:(id)a1 actionName:(id)a2 parent:(id)a3 createSubComponent:(BOOL)a4 videoSource:(BOOL)a5 singleSource:(BOOL)a6;
- (id)defaultGlobalComponent;
- (id)parseSubComponentConfig:(id)a0 parent:(id)a1 createSubComponent:(BOOL)a2 videoSource:(BOOL)a3 singleSource:(BOOL)a4;
- (id)defaultRootSubComponent;
- (id)defaultAudioSubComponent;
- (id)parseSubComponentConfig:(id)a0 parent:(id)a1 createSubComponent:(BOOL)a2;
- (void *)componentBackActionContext:(id)a0;
- (void)createBackComponentWithModel:(id)a0 type:(long long)a1 parent:(id)a2;
- (id)initWithVCContext:(id)a0;
- (id)createComponentWithType:(long long)a0 parent:(id)a1 createSubComponent:(BOOL)a2 videoSource:(BOOL)a3 singleSource:(BOOL)a4;
- (id)globalComponents;
- (void).cxx_destruct;

@end
