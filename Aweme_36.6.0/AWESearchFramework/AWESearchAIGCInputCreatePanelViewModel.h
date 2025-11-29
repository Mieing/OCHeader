@class AWESearchAIGCInputCreatePanelRequirementCellViewModel, NSArray, AWESearchAIGCInputAgentModel, AWESearchAIGCInputCreatePanelGenreCellViewModel;

@interface AWESearchAIGCInputCreatePanelViewModel : NSObject

@property (retain, nonatomic) AWESearchAIGCInputCreatePanelGenreCellViewModel *genreCellViewModel;
@property (retain, nonatomic) AWESearchAIGCInputCreatePanelRequirementCellViewModel *requirementCellViewModel;
@property (nonatomic) BOOL isShowing;
@property (readonly, nonatomic) AWESearchAIGCInputAgentModel *agentModel;
@property (readonly, copy, nonatomic) NSArray *cellViewModels;

- (id)createSearchQueryWithOriginQuery:(id)a0;
- (id)selectedGenreModel;
- (id)initWithAgentModel:(id)a0;
- (void)updateSelectedGenreModel:(id)a0;
- (void).cxx_destruct;

@end
