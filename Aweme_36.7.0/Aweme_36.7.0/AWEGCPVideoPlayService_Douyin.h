@class IESGCPPlayerTransitionContext, NSMutableArray, NSString;

@interface AWEGCPVideoPlayService_Douyin : NSObject <AWEAwemeDetailTableViewControllerDelegate, AWEGCPVideoPlayService>

@property (copy, nonatomic) id /* block */ trackAwemePlayTime;
@property (copy, nonatomic) id /* block */ requestOutFlowIfNeed;
@property (retain, nonatomic) IESGCPPlayerTransitionContext *transitionContextWrapper;
@property (nonatomic) long long firstIndexInMixOfData;
@property (retain, nonatomic) NSMutableArray *dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)detailTableViewController:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2 model:(id)a3;
- (void)detailTableViewController:(id)a0 scrollDidEndAtIndexPath:(id)a1 model:(id)a2;
- (void)detailTableViewControllerWillDisappear:(id)a0 currentAwemeModel:(id)a1;
- (void)enterDetailWithDataManager:(id)a0 fromContextProvider:(id)a1 index:(long long)a2 trackAwemePlayTime:(id /* block */)a3 requestOutFlowIfNeed:(id /* block */)a4 referString:(id)a5 enablePlayList:(BOOL)a6 withExtra:(id)a7;
- (void)enterDetailWithGCPAwemeModels:(id)a0 fromContextProvider:(id)a1 index:(long long)a2 trackAwemePlayTime:(id /* block */)a3 referString:(id)a4 enablePlayList:(BOOL)a5 withExtra:(id)a6;
- (Class)videoPlayManagerClass;
- (id)getIESGCPPlayVideoViewController;
- (id)getIESGCPLivePlayerView;
- (id)addMixItemsListToDict:(id)a0 models:(id)a1;
- (void)trackAwemePlayTimeIfNeedWithDetailVC:(id)a0;
- (void).cxx_destruct;

@end
