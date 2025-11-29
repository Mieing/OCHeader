@class NSString, NSDictionary, NSArray, AWEVideoPublishViewModel, NSMutableArray;
@protocol IESServiceProvider;

@interface ACCEditorSideslipPanelBaseListDataProvider : NSObject <ACCEditorSideslipPropPanelListDataProviderProtocol>

@property (nonatomic) unsigned long long listDataType;
@property (nonatomic) unsigned long long loadState;
@property (copy, nonatomic) NSString *slideLeftDataCategory;
@property (copy, nonatomic) NSString *slideRightDataCategory;
@property (copy, nonatomic) NSDictionary *propPickCellModelDic;
@property (copy, nonatomic) NSArray *originalTotalList;
@property (retain, nonatomic) NSArray *totalList;
@property (retain, nonatomic) NSArray *lastList;
@property (retain, nonatomic) NSMutableArray *completions;
@property (nonatomic) long long expectFocusIndex;
@property (nonatomic) BOOL expectFocusAnimated;
@property (nonatomic) BOOL skipAutoLocate;
@property (nonatomic) long long rightFirstIndex;
@property (nonatomic) BOOL isSupportCancelItem;
@property (nonatomic) BOOL isPlaceHolder;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (id)cellModelWithModelId:(id)a0;
- (id)tabNameWithIndex:(long long)a0;
- (void)resetInitialFocusInfo;
- (void)resetInitialCellModels;
- (BOOL)isListDataFormCache;
- (BOOL)shouldHideMoreIconWhileLoading;
- (id)initWithServiceProvider:(id)a0 repository:(id)a1;
- (void)buildPlaceHolderCellModels;
- (void)updatePlaceholderBackgroundColorWithCellList:(id)a0;
- (void).cxx_destruct;

@end
