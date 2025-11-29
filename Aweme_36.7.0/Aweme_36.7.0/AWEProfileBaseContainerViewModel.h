@class NSArray, AWETabContainerSectionViewModel, AWEProfileBaseHeaderSectionViewModel;

@interface AWEProfileBaseContainerViewModel : AWEBaseListViewModel

@property (copy, nonatomic) NSArray *currentTabItemArray;
@property (retain, nonatomic) AWEProfileBaseHeaderSectionViewModel *headerSectionViewModel;
@property (retain, nonatomic) AWETabContainerSectionViewModel *tabSectionViewModel;

- (void)scrollToIndex:(unsigned long long)a0;
- (void)updateByContext:(id)a0;
- (BOOL)isSame:(id)a0 to:(id)a1;
- (void)reloadSectionsWithContext:(id)a0;
- (void).cxx_destruct;

@end
