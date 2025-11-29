@class AWESearchAIGCInputAgentActionCreateGenre, NSArray;

@interface AWESearchAIGCInputCreatePanelGenreCellViewModel : AWESearchAIGCInputCreatePanelBaseCellViewModel

@property (readonly, nonatomic) AWESearchAIGCInputAgentActionCreateGenre *selectedGenre;
@property (readonly, copy, nonatomic) NSArray *genreList;

- (void)resetSelectedGenre:(id)a0;
- (id)initWithGenreList:(id)a0;
- (void).cxx_destruct;

@end
