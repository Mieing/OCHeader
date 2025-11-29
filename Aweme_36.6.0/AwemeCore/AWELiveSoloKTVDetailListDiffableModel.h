@class NSArray;

@interface AWELiveSoloKTVDetailListDiffableModel : AWELiveSoloKTVDetailDiffableModel

@property (copy, nonatomic) NSArray *viewModelArray;
@property (nonatomic) double awemeSectionInsetTop;

- (void)appendWithModelArray:(id)a0;
- (void)replaceWithModelArray:(id)a0;
- (id)initWithViewModelArray:(id)a0;
- (void).cxx_destruct;

@end
