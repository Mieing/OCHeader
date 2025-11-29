@class NSArray, NSString;
@protocol IESECLiveListReloadProtocol;

@interface IESECLiveBaseListViewModel : NSObject

@property (copy, nonatomic) NSArray *sectionViewModelsArray;
@property (weak, nonatomic) id<IESECLiveListReloadProtocol> listDelegate;
@property (readonly, nonatomic) long long dataState;
@property (readonly, copy, nonatomic) NSString *errorMessage;

- (void)updateBySectionViewModels:(id)a0;
- (void)updateBySectionViewModels:(id)a0 animated:(BOOL)a1;
- (void)appendSectionViewModels:(id)a0 animated:(BOOL)a1;
- (void)insertSectionViewModel:(id)a0 atIndex:(long long)a1;
- (void)insertSectionViewModel:(id)a0 atIndex:(long long)a1 animated:(BOOL)a2;
- (void)insertSectionViewModels:(id)a0 atIndexes:(id)a1 animated:(BOOL)a2;
- (void)insertSectionViewModels:(id)a0 atIndexes:(id)a1;
- (void)removeSectionViewModels:(id)a0 animated:(BOOL)a1;
- (void)appendSectionViewModels:(id)a0;
- (void)replaceBySectionViewModels:(id)a0;
- (void)setupViewModel;
- (void)removeSectionViewModels:(id)a0;
- (void)replaceSectionViewModelAtIndex:(unsigned long long)a0 withSectionViewModel:(id)a1 animated:(BOOL)a2;
- (void)replaceSectionViewModelsAtIndexes:(id)a0 withSectionViewModels:(id)a1 animated:(BOOL)a2;
- (void)replaceBySectionViewModels:(id)a0 reloadList:(BOOL)a1;
- (void)appendSectionViewModels:(id)a0 reloadList:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;

@end
