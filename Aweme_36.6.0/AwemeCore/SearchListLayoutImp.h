@class NSMutableDictionary;
@protocol SearchListLayoutDelegate;

@interface SearchListLayoutImp : NSObject

@property (retain, nonatomic) NSMutableDictionary *componentFrames;
@property (weak, nonatomic) id<SearchListLayoutDelegate> delegate;

- (void)cellDidLayoutSubviewForIndexPath:(id)a0;
- (void)clearModelForIndexPaths:(id)a0;
- (void)updateSizeForComponent:(struct CGSize { double x0; double x1; })a0 forIndexPath:(id)a1 forCellSize:(struct CGSize { double x0; double x1; })a2;
- (BOOL)checkCellsAsyncLayoutSubviewFinished;
- (id)getLayoutModelForIndexPath:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)clearModels;

@end
