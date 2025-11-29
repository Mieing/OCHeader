@protocol ACCAdvanceEditViewModelProtocol;

@interface ACCAdvanceEditChapterModule : DVEFeatureModule

@property (weak, nonatomic) id<ACCAdvanceEditViewModelProtocol> nleEditViewModel;

- (void)moduleDidAppear;
- (void).cxx_destruct;

@end
