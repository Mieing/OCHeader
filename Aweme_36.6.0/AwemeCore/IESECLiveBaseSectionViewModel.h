@class NSArray;
@protocol IESECLiveListSectionProtocol;

@interface IESECLiveBaseSectionViewModel : NSObject <IGListDiffable>

@property (copy, nonatomic) NSArray *modelsArray;
@property (weak, nonatomic) id<IESECLiveListSectionProtocol> sectionDelegate;
@property (nonatomic) long long sectionIndex;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (void)appendModels:(id)a0;
- (void)removeAllModels;
- (void)removeModels:(id)a0;
- (void)replaceByModels:(id)a0;
- (void)insertModel:(id)a0 atIndex:(long long)a1;
- (void)updateByModels:(id)a0;
- (void)insertModel:(id)a0 atIndex:(long long)a1 animated:(BOOL)a2;
- (void)appendModels:(id)a0 animated:(BOOL)a1;
- (void)removeModels:(id)a0 animated:(BOOL)a1;
- (void)replaceByModels:(id)a0 animated:(BOOL)a1;
- (void)insertModels:(id)a0 atIndexes:(id)a1 animated:(BOOL)a2;
- (void)updateByModels:(id)a0 animated:(BOOL)a1;
- (void)removeAllModels:(BOOL)a0;
- (void)replaceExistingModelWithNewModel:(id)a0 animated:(BOOL)a1;
- (void)replaceExistingModelWithNewModel:(id)a0;
- (void)updateSectionAnimation:(BOOL)a0 completion:(id /* block */)a1;
- (void)appendModels:(id)a0 reloadList:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;

@end
