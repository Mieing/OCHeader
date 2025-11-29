@class AWELoadMoreAdInfoModel, NSString, NSLock, NSMutableArray;

@interface AWESearchLoadMoreBackFeatureManager : NSObject <AWESearchLoadMoreBackFeatureManager>

@property (copy, nonatomic) NSString *currentShowGeneralSearchVCStr;
@property (nonatomic) BOOL isEnterGeneralSearchVC;
@property (nonatomic) BOOL isEnterDetailSearchVC;
@property (retain, nonatomic) NSLock *lock;
@property (readonly, nonatomic) AWELoadMoreAdInfoModel *currenLoadMoreInfo;
@property (retain, nonatomic) NSMutableArray *storeLoadMoreInformationArr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)addLoadMoreInfoModelWithGeneralSearchModelArray:(id)a0;
- (void)insertAssociatedAdWithModel:(id)a0;
- (void)recordEnterSearchDetailViewController:(BOOL)a0 aweme:(id)a1;
- (void)recordLikeClickWith:(id)a0;
- (void)recordADClickWith:(id)a0;
- (void)recordPlaybackTimeWith:(id)a0;
- (void)recordPlaybackTimeWith:(id)a0 playbackTime:(double)a1 loopTimes:(long long)a2;
- (void)deleteCurrentLoadMoreInfoModel;
- (void)recordCurrentShowVideoPlayTimeAndLoopTimes;
- (id)currenLoadMoreInfoDictionaryList;
- (id)interactiveInformationWithAweme:(id)a0;
- (id)interactiveInformationWithCreativeID:(id)a0;
- (id)mergeCurrentLoadMoreInfoModel:(id)a0;
- (id)consumerLastLoadMoreInfoDictionary;
- (void)recordEnterGeneralSearchViewController:(BOOL)a0 vc:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
