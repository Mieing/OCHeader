@class AWETabContainerSectionViewModel, NSMutableArray;

@interface AWEProfileExtensionAreaAllCardViewModel : AWEBaseListViewModel

@property (retain, nonatomic) AWETabContainerSectionViewModel *tabBarViewModel;
@property (retain, nonatomic) NSMutableArray *viewControllers;

- (void)updateWithCards:(id)a0 paramDict:(id)a1;
- (void).cxx_destruct;

@end
