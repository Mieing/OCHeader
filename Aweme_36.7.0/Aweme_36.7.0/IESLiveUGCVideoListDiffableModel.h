@class NSArray;

@interface IESLiveUGCVideoListDiffableModel : IESLiveUGCVideoDiffableModel

@property (copy, nonatomic) NSArray *viewModelArray;

- (void)appendWithModelArray:(id)a0;
- (void)replaceWithModelArray:(id)a0;
- (id)initWithViewModelArray:(id)a0;
- (void).cxx_destruct;

@end
