@class AWEListenFeedPlayModel, AWEMixVideoModel, AWEAwemeModel, NSMutableArray, AWEListDataController;
@protocol AWEMixVideoListDataControllerProtocol;

@interface AWEListenFeedCellViewModel : NSObject

@property (retain, nonatomic) NSMutableArray *extendModelArray;
@property (retain, nonatomic) AWEMixVideoModel *mixVideoModel;
@property (retain, nonatomic) AWEListDataController<AWEMixVideoListDataControllerProtocol> *dataController;
@property (nonatomic) BOOL isRequesting;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEListenFeedPlayModel *playModel;
@property (nonatomic) BOOL isNeedPlay;
@property (nonatomic) BOOL hasPreload;
@property (retain, nonatomic) AWEMixVideoModel *mixVideoModelMocked;

- (id)currentExtendModelArray;
- (id)currentMixVideoModel;
- (long long)currentModelIndex;
- (BOOL)isSupportedExtend;
- (void)requestMixVideoDetailWithCompletion:(id /* block */)a0;
- (void)requestPreExtendModelArrayWithCompletion:(id /* block */)a0;
- (void)requestNextExtendModelArrayWithCompletion:(id /* block */)a0;
- (BOOL)isSupportedMixType;
- (void)initRequestExtendModelArrayWithCompletion:(id /* block */)a0;
- (long long)currentMaxEpisode;
- (id)supportedMixVideoModel;
- (id)currentMixCoverURL;
- (void).cxx_destruct;
- (long long)currentEpisode;

@end
