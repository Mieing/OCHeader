@class NSArray, NSString;

@interface AWESearchListCommodityCollectionCell : SearchListCollectionCell <AWEMSearchAutoPlayCard, AWEMSearchAutoPlayCardModelDelegate>

@property (nonatomic) BOOL needPlayFinishConf;
@property (retain, nonatomic) NSArray *awemeListModel;
@property (nonatomic) long long playSession;
@property (copy, nonatomic) id /* block */ cellVideoPlayFinished;
@property (readonly, nonatomic) BOOL needPlayFinish;
@property (readonly, nonatomic) double playInterval;
@property (copy, nonatomic) id /* block */ playDidFinishBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)awemeModel;
- (id)liveTransitionContext;
- (id)awemeList;
- (void)updateAwemeList:(id)a0;
- (id)livePlayerView;
- (void)updatePlayDidFinishBlk:(id /* block */)a0;
- (void)didAsyncUpdatedUIFrame:(struct CGSize { double x0; double x1; })a0;
- (void)updateSearchElementContext;
- (void)forwardElementMessageWithMesssageType:(unsigned long long)a0 payload:(id)a1;
- (void)didBecomeActive;
- (void).cxx_destruct;
- (id)transitionContext;
- (void)didResignActive;
- (void)layoutSubviews;
- (id)activeView;
- (void)resetPlayer;
- (id)livePlayer;

@end
