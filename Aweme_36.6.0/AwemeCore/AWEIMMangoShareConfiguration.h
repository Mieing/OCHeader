@class AWEIMMangoShareBizCellsInfo, AWEIMMangoShareDataInfo, AWEIMMangoShareClickInfo, NSDictionary, AWEIMMangoShareSearchConfig, AWEIMMangoSharePanelMultiSelectInfo, NSString, AWEIMMangoShareEmptyPageConfig, AWEIMMangoShareDataSourceConfig, AWEIMMangoShareHeaderInfo, AWEIMMangoShareOutShareInfo, AWEIMMangoShareTaskInfo, AWEIMMangoShareAppearanceInfo;

@interface AWEIMMangoShareConfiguration : NSObject

@property (retain, nonatomic) AWEIMMangoShareAppearanceInfo *appearanceInfo;
@property (readonly, copy, nonatomic) NSString *enterFrom;
@property (readonly, copy, nonatomic) NSString *enterMethod;
@property (readonly, nonatomic) long long createGroupType;
@property (copy, nonatomic) NSString *listScene;
@property (copy, nonatomic) NSDictionary *trackExt;
@property (retain, nonatomic) AWEIMMangoShareDataInfo *dataInfo;
@property (retain, nonatomic) AWEIMMangoShareTaskInfo *taskInfo;
@property (retain, nonatomic) AWEIMMangoShareOutShareInfo *outShareInfo;
@property (nonatomic) long long selectType;
@property (retain, nonatomic) AWEIMMangoSharePanelMultiSelectInfo *multiSelectInfo;
@property (retain, nonatomic) AWEIMMangoShareClickInfo *clickInfo;
@property (copy, nonatomic) id /* block */ singleSelectAction;
@property (copy, nonatomic) id /* block */ preCheckAction;
@property (retain, nonatomic) AWEIMMangoShareHeaderInfo *headerInfo;
@property (retain, nonatomic) AWEIMMangoShareBizCellsInfo *bizCellsInfo;
@property (retain, nonatomic) AWEIMMangoShareSearchConfig *searchConfig;
@property (retain, nonatomic) AWEIMMangoShareDataSourceConfig *dataSourceConfig;
@property (retain, nonatomic) AWEIMMangoShareEmptyPageConfig *emptyPageConfig;

- (void)updateCreateGroupType:(long long)a0;
- (id)initWithRouterParams:(id)a0;
- (id)initWithMultiSelectInfo:(id)a0 enterFrom:(id)a1 enterMethod:(id)a2;
- (id)initWithSingleSelectAction:(id /* block */)a0 enterFrom:(id)a1 enterMethod:(id)a2;
- (void).cxx_destruct;
- (id)description;

@end
