@class NSArray, NSDictionary, YataContainerViewSource, UIView, NSString;
@protocol YataInstanceInnerInterface;

@interface YataABSContainerController : NSObject <YataContainerControllerInterface>

@property (weak, nonatomic) YataContainerViewSource *viewSource;
@property (copy, nonatomic) NSArray *keySeqArray;
@property (copy, nonatomic) NSArray *animationIntermediateArray;
@property (copy, nonatomic) NSArray *animationChangingArray;
@property (weak, nonatomic) id<YataInstanceInnerInterface> instance;
@property (retain, nonatomic) NSDictionary *viewHolderDict;
@property (retain, nonatomic) UIView *container;
@property (nonatomic) BOOL skipRender;
@property (nonatomic) BOOL forceBindData;
@property (copy, nonatomic) NSString *position;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerSectionViewModels:(id)a0;
- (void)performSectionUpdatesAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)updateYataSection;
- (void)clearBodySectionData;
- (void)onViewHolderContainerRefresh:(id /* block */)a0;
- (void)onViewHolderContainerChanged:(id)a0 viewHolderSeqKey:(id)a1 viewHolderDict:(id)a2 animationIntermediateSeqKey:(id)a3 animationChangingSeqKey:(id)a4 completion:(id /* block */)a5;
- (void)onChangeWithPosition:(id)a0 viewHolderSeq:(id)a1 viewHolderDict:(id)a2 animationIntermediateSeq:(id)a3 animationChangingSeq:(id)a4 completion:(id /* block */)a5;
- (void)setupWithView:(id)a0 instance:(id)a1 viewSource:(id)a2;
- (void)updateContainerSkipRenderFlag:(BOOL)a0;
- (void)forceCreateAndRebindData;
- (void)reloadRegistedObject:(id)a0 isBodyError:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithPosition:(id)a0;

@end
