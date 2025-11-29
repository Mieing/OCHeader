@class NSSet, NSString, AWESearchDynamicPreLayoutManager;

@interface AWESearchSeparateRenderManagerBasic : NSObject

@property (retain, nonatomic) AWESearchDynamicPreLayoutManager *preLayoutManager;
@property (readonly, nonatomic) BOOL isSeparateRenderIndividualOpen;
@property (readonly, nonatomic) BOOL isSeparateSSROpen;
@property (readonly, nonatomic) NSSet *blockList;
@property (readonly, nonatomic) NSSet *blockChannelList;
@property (readonly, nonatomic) NSSet *multiTASMBlockList;
@property (readonly, nonatomic) NSSet *switchToSyncBlockList;
@property (readonly, nonatomic) NSSet *switchToSyncEnableList;
@property (retain, nonatomic) Class preprocessClass;
@property (copy, nonatomic) NSString *searchScene;

- (void)createLayoutTaskWithArray:(id)a0 completionBlock:(id /* block */)a1;
- (id)initWithConfig:(Class)a0 preProcessClass:(Class)a1;
- (BOOL)modelValidForSeparateRender:(id)a0 bundle:(id)a1 channel:(id)a2;
- (void)checkBlockListForOptimize:(id)a0 bundle:(id)a1 channel:(id)a2;
- (BOOL)isSeparateRenderOpened;
- (void).cxx_destruct;

@end
