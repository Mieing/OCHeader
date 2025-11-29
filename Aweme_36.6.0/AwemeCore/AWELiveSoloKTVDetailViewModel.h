@class NSDictionary, NSString, AWELiveSoloKTVDetailHeaderInfoDiffableModel, AWELiveSoloKTVDetailApi, AWELiveSoloKTVDetailListDiffableModel, AWELiveSoloKTVDetailListDataController, NSArray;

@interface AWELiveSoloKTVDetailViewModel : NSObject

@property (retain, nonatomic) AWELiveSoloKTVDetailApi *api;
@property (copy, nonatomic) NSString *songId;
@property (retain, nonatomic) AWELiveSoloKTVDetailHeaderInfoDiffableModel *headerInfoObject;
@property (retain, nonatomic) AWELiveSoloKTVDetailListDiffableModel *awemeListObject;
@property (retain, nonatomic) AWELiveSoloKTVDetailListDataController *awemeListDataController;
@property (copy, nonatomic) NSArray *cachedObjectArray;
@property (nonatomic) long long detailInfoFetchState;
@property (nonatomic) long long awemeListFetchState;
@property (copy, nonatomic) NSDictionary *trackExtra;
@property (nonatomic) BOOL didTrackEnterSoloKTVDetail;
@property (readonly, copy, nonatomic) NSArray *sectionControllerModelObjectArray;
@property (nonatomic) BOOL awemeListUpdated;

- (void)fetchAwemeList;
- (id)initWithSongId:(id)a0 extra:(id)a1;
- (void)setupParamsWithSongId:(id)a0;
- (void)fetchDetailInfoWithSongId:(id)a0;
- (void)trackEnterSoloKTVDetailIfNeed;
- (void).cxx_destruct;

@end
