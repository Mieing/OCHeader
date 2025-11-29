@class NSArray;

@interface AWEDetailDiffableMultiModelObject : NSObject <AWEDetailDiffableMultiModelObject>

@property (copy, nonatomic) NSArray *viewModelArray;
@property (nonatomic) double awemeSectionInsetTop;
@property (nonatomic) long long showedSections;
@property (nonatomic) BOOL forceHideDigg;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (void)appendWithModelArray:(id)a0;
- (void)replaceWithModelArray:(id)a0;
- (id)initWithViewModelArray:(id)a0;
- (void).cxx_destruct;

@end
