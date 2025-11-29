@class NSString, NSArray;
@protocol IESECListKitBaseListSectionContext;

@interface IESECListKitBaseListSectionViewModel : NSObject <IGListDiffable>

@property (nonatomic) BOOL didFinishNetworkRequest;
@property (weak, nonatomic) IESECListKitBaseListSectionViewModel *preSectionViewModel;
@property (weak, nonatomic) IESECListKitBaseListSectionViewModel *nextSectionViewModel;
@property (nonatomic) long long dataState;
@property (copy, nonatomic) NSString *errorMessage;
@property (weak, nonatomic) id<IESECListKitBaseListSectionContext> sectionContext;
@property (copy, nonatomic) NSArray *modelsArray;
@property (nonatomic) BOOL openInsertAnimated;

+ (id)viewModelWithModelsArray:(id)a0;
+ (id)viewModel;

- (void)removeModels:(id)a0 animated:(BOOL)a1 sync:(BOOL)a2;
- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (void)appendModels:(id)a0;
- (void)removeAllModels;
- (void)removeModels:(id)a0;
- (void)replaceByModels:(id)a0;
- (void)insertModel:(id)a0 atIndex:(long long)a1;
- (void)fetchSectionData;
- (void)updateByModels:(id)a0;
- (void)insertModel:(id)a0 atIndex:(long long)a1 animated:(BOOL)a2;
- (void)appendModels:(id)a0 animated:(BOOL)a1;
- (void)appendModels:(id)a0 animated:(BOOL)a1 sync:(BOOL)a2;
- (void)removeModels:(id)a0 animated:(BOOL)a1;
- (void)replaceByModels:(id)a0 animated:(BOOL)a1;
- (void)insertModels:(id)a0 atIndexes:(id)a1 animated:(BOOL)a2;
- (void)updateByModels:(id)a0 animated:(BOOL)a1;
- (void)replaceByModels:(id)a0 animated:(BOOL)a1 sync:(BOOL)a2;
- (void)loadMoreSectionData;
- (long long)modelsDiffType;
- (void)reorderModelsArray:(id)a0;
- (id)initWithModelsArray:(id)a0;
- (void)removeAllModels:(BOOL)a0;
- (void)replaceExistingModelWithNewModel:(id)a0 animated:(BOOL)a1;
- (void)reloadSection:(BOOL)a0 sync:(BOOL)a1;
- (void)updateSection:(BOOL)a0 sync:(BOOL)a1;
- (void)removeAllModels:(BOOL)a0 sync:(BOOL)a1;
- (void)insertModel:(id)a0 atIndex:(long long)a1 animated:(BOOL)a2 sync:(BOOL)a3;
- (void)insertModels:(id)a0 atIndexes:(id)a1 animated:(BOOL)a2 sync:(BOOL)a3;
- (void)replaceExistingModelWithNewModel:(id)a0 animated:(BOOL)a1 sync:(BOOL)a2;
- (void)replaceExistingModelWithNewModel:(id)a0;
- (void)removeModels:(id)a0 animated:(BOOL)a1 sync:(BOOL)a2 completion:(id /* block */)a3;
- (void)updateSection:(BOOL)a0 sync:(BOOL)a1 completion:(id /* block */)a2;
- (void)updateByModels:(id)a0 animated:(BOOL)a1 sync:(BOOL)a2 completion:(id /* block */)a3;
- (void)insertModel:(id)a0 atIndex:(long long)a1 animated:(BOOL)a2 sync:(BOOL)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;
- (id)init;

@end
