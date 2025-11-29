@class AWEIMTaskDetailistContext, AWEIMTaskCardListCellItem, NSArray, AWEIMWorkSpaceDetailResponse, NSMutableDictionary, AWEIMWorkSpaceDetailFilterInfoModel, UITableView;
@protocol IESIMHttpTask;

@interface AWEIMTaskDetailListDataSource : NSObject

@property (weak, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEIMWorkSpaceDetailResponse *model;
@property (retain, nonatomic) AWEIMTaskCardListCellItem *cellItem;
@property (copy, nonatomic) NSArray *recommendModes;
@property (retain, nonatomic) AWEIMWorkSpaceDetailResponse *firstResponseModel;
@property (retain, nonatomic) NSMutableDictionary *filterMap;
@property (retain, nonatomic) id<IESIMHttpTask> requestingTask;
@property (retain, nonatomic) AWEIMTaskDetailistContext *context;
@property (retain, nonatomic) AWEIMWorkSpaceDetailFilterInfoModel *missionFilterInfo;
@property (retain, nonatomic) NSMutableDictionary *readFilterMap;
@property (nonatomic) BOOL showErrView;
@property (nonatomic) BOOL shouldShowEmptyLabel;
@property (nonatomic) BOOL isDataRefreshed;
@property (nonatomic) unsigned long long fetchState;
@property (copy, nonatomic) NSArray *snapshot;

- (void)renderModel:(id)a0 context:(id)a1;
- (void)fetchData:(unsigned long long)a0;
- (id)missionSectionModelWithModel:(id)a0;
- (id)recommendMissionSectionModelWithModel:(id)a0;
- (id)cellModelsForMissionModels:(id)a0;
- (id)cellModelForCardModel:(id)a0;
- (void)retractData;
- (void).cxx_destruct;
- (id)initWithTableView:(id)a0;

@end
