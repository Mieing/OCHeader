@class NSArray, AWEFollowListPageContext, NSString, _TtC19AWECommentSwiftImpl18CommentPageContext;
@protocol AWEBaseListSectionContext;

@interface AWEBaseListSectionViewModel : NSObject <IGListDiffable> {
    BOOL _useCellViewModel;
}

@property (nonatomic, retain) _TtC19AWECommentSwiftImpl18CommentPageContext *pageContext;
@property (retain, nonatomic) AWEFollowListPageContext *followListSectionContext;
@property (retain, nonatomic) AWEFollowListPageContext *fansListSectionContext;
@property (nonatomic) long long sectionIndex;
@property (retain, nonatomic) id containerDataContext;
@property (copy, nonatomic) NSArray *modelsArray;
@property (nonatomic) BOOL didFinishNetworkRequest;
@property (weak, nonatomic) AWEBaseListSectionViewModel *preSectionViewModel;
@property (weak, nonatomic) AWEBaseListSectionViewModel *nextSectionViewModel;
@property (nonatomic) BOOL willResetIndexInfo;
@property (nonatomic) BOOL didResetIndexInfo;
@property (nonatomic) BOOL willUpdateIndexInfo;
@property (nonatomic) BOOL didUpdateIndexInfo;
@property (nonatomic) long long dataState;
@property (copy, nonatomic) NSString *errorMessage;
@property (weak, nonatomic) id<AWEBaseListSectionContext> sectionContext;

+ (id)viewModelWithModelsArray:(id)a0;
+ (BOOL)useCellViewModel;
+ (id)viewModel;

- (void)removeModels:(id)a0 animated:(BOOL)a1 sync:(BOOL)a2;
- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (void)appendModels:(id)a0;
- (void)removeAllModels;
- (void)removeModels:(id)a0;
- (void)replaceByModels:(id)a0;
- (void)insertModel:(id)a0 atIndex:(long long)a1;
- (void)fetchSectionData;
- (void)updateByModels:(id)a0;
- (void)insertModel:(id)a0 atIndex:(long long)a1 animated:(BOOL)a2;
- (void)appendModels:(id)a0 animated:(BOOL)a1;
- (void)appendModels:(id)a0 animated:(BOOL)a1 sync:(BOOL)a2;
- (void)removeModels:(id)a0 animated:(BOOL)a1;
- (id)erasedToAny;
- (void)replaceByModels:(id)a0 animated:(BOOL)a1;
- (void)updateByModels:(id)a0 animated:(BOOL)a1 sync:(BOOL)a2;
- (void)insertModels:(id)a0 atIndexes:(id)a1 animated:(BOOL)a2;
- (void)updateByModels:(id)a0 animated:(BOOL)a1;
- (void)replaceByModels:(id)a0 animated:(BOOL)a1 sync:(BOOL)a2;
- (void)loadMoreSectionData;
- (long long)modelsDiffType;
- (void)reorderModelsArray:(id)a0;
- (id)initWithModelsArray:(id)a0;
- (void)removeAllModels:(BOOL)a0;
- (void)replaceExistingModelWithNewModel:(id)a0 animated:(BOOL)a1;
- (void)reloadSection:(BOOL)a0 sync:(BOOL)a1;
- (void)updateSection:(BOOL)a0 sync:(BOOL)a1;
- (void)removeAllModels:(BOOL)a0 sync:(BOOL)a1;
- (void)insertModel:(id)a0 atIndex:(long long)a1 animated:(BOOL)a2 sync:(BOOL)a3;
- (void)insertModels:(id)a0 atIndexes:(id)a1 animated:(BOOL)a2 sync:(BOOL)a3;
- (void)replaceExistingModelWithNewModel:(id)a0 animated:(BOOL)a1 sync:(BOOL)a2;
- (void)replaceExistingModelWithNewModel:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
