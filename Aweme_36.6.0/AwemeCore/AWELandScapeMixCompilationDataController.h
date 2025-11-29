@class NSString, AWEAwemeModel, NSMutableArray, AWEListDataController;
@protocol AWEMixVideoDetailPlayListDataControllerProtocol;

@interface AWELandScapeMixCompilationDataController : NSObject

@property (retain, nonatomic) AWEListDataController<AWEMixVideoDetailPlayListDataControllerProtocol> *dataController;
@property (retain, nonatomic) AWEAwemeModel *currentModel;
@property (nonatomic) BOOL hasAddCurrentModel;
@property (copy, nonatomic) NSString *mixID;
@property (retain, nonatomic) NSMutableArray *videoArray;
@property (nonatomic) long long maxCuror;
@property (nonatomic) long long mixCuror;
@property (nonatomic) BOOL isRequestForward;
@property (nonatomic) BOOL forwardHasMore;
@property (nonatomic) BOOL backwardHasMore;
@property (nonatomic) BOOL isRequestOnAir;

- (void)requestForwardModel:(id /* block */)a0;
- (BOOL)canRequestToForward;
- (id)filteredAlbumWithModelList:(id)a0;
- (BOOL)canRequestToBackward;
- (void)requestBackwardModel:(id /* block */)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end
