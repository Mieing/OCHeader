@class AWEListenFeedPlayModel, NSString;

@interface AWEAwemeDetailListenFeedController : AWEAwemeNewDetailBaseController <AWEAwemeDetailListenFeedControllerProtocol>

@property (retain, nonatomic) AWEListenFeedPlayModel *tempPlayModel;
@property (nonatomic) double beginPredictTime;
@property (nonatomic) BOOL preventVideoPlayTrack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configCell:(id)a0 atIndexPath:(id)a1 tableView:(id)a2;
- (void)detailCellViewController:(id)a0 didChangePlaybackStateWithAction:(long long)a1;
- (BOOL)enableFixNaviBarModelUpdate;
- (BOOL)canHandleCurrentAwemeByListenFeed;
- (void)exitFromListenFeedWithAwemeModel:(id)a0 playModel:(id)a1 isUsedExternalPlayer:(BOOL)a2;
- (void).cxx_destruct;

@end
