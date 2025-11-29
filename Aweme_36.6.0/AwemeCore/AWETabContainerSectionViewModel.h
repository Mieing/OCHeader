@class NSArray;

@interface AWETabContainerSectionViewModel : AWEBaseListSectionViewModel

@property (nonatomic) BOOL needsUpdate;
@property (copy, nonatomic) NSArray *itemModelsArray;

+ (id)viewModel;

- (void).cxx_destruct;

@end
