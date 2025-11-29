@class NSString, NSMutableDictionary;
@protocol TingDiscoverTapesService;

@interface TingDiscoverTapeMgr : NSObject <TingDiscoverTapesListener>

@property (nonatomic) unsigned int taskId;
@property (retain, nonatomic) id<TingDiscoverTapesService> discoverService;
@property (retain, nonatomic) NSMutableDictionary *dictTaskContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)discoverMusicTapesWithCompletion:(id /* block */)a0;
- (void)getCommentInfoForListenIds:(id)a0 completion:(id /* block */)a1;
- (void)likeOpWithListenId:(id)a0 isCancel:(BOOL)a1 scene:(int)a2 completion:(id /* block */)a3;
- (void)likeCurOpLikeStatus:(BOOL)a0 scene:(int)a1 completion:(id /* block */)a2;
- (void)onMusicTapesUpdate:(id)a0 errMsg:(id)a1 taskId:(unsigned int)a2;
- (void)onListenItemCommentInfoUpdate:(id)a0 commentInfo:(id)a1 errMsg:(id)a2 taskId:(unsigned int)a3;
- (id)listenLaterTapeItem;
- (id)audioRecommendTapeItem;
- (void).cxx_destruct;

@end
