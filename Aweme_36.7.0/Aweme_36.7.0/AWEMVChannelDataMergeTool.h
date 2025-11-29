@interface AWEMVChannelDataMergeTool : NSObject

- (void)groupMergeFullResponse:(id)a0 toTidyResponse:(id)a1 groupSize:(long long)a2 completion:(id /* block */)a3;
- (void)_mergeFullAwemeList:(id)a0 toTidyAwemeList:(id)a1 mergeIndex:(long long)a2 groupSize:(long long)a3 unmergedModels:(id)a4 completion:(id /* block */)a5;

@end
