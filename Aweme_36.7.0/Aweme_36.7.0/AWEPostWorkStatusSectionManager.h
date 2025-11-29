@interface AWEPostWorkStatusSectionManager : AWEUserWorkStatusSectionManager

- (void)setupBindings;
- (id)horizontalSection;
- (id)guideSectionViewModel;
- (BOOL)checkShowLoadingView;
- (BOOL)checkShowVacantView;
- (id)statusSectionViewModel;
- (void)containerViewDidLoad;

@end
