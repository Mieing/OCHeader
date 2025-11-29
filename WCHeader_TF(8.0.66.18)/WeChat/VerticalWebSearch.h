@class UIViewController;

@interface VerticalWebSearch : WebSearchUseCase

@property (weak, nonatomic) UIViewController *fromViewController;

+ (BOOL)finderLiveEnabled;
+ (void)jumpLiveSearchFrom:(id)a0;

- (id)initWithContextMode:(id /* block */)a0;
- (id)associateSearchBarWith:(id)a0;
- (id)associateSearchBarWith:(id)a0 withSearchBarAnimation:(BOOL)a1;
- (void)_didStartWith:(id)a0;
- (void).cxx_destruct;

@end
