@class NSArray, NSDictionary, NSString, AWEShareContext;

@interface AWEIMShareContactListViewUtility : NSObject

@property (copy, nonatomic) NSDictionary *routerParams;
@property (retain, nonatomic) AWEShareContext *shareContext;
@property (copy, nonatomic) NSArray *disabledSecUids;
@property (copy, nonatomic) NSArray *onlyShowSecUids;
@property (nonatomic) BOOL enableMessageTabSort;
@property (nonatomic) BOOL disableShareSend;
@property (nonatomic) BOOL isExchange;
@property (copy, nonatomic) NSString *customSendButtonTitle;
@property (nonatomic) long long scene;
@property (nonatomic) BOOL disableSingleFollow;

+ (id)filterEmptyModel:(id)a0;

- (id)initWithRouterParams:(id)a0 shareContext:(id)a1;
- (id)transformShareModelToCellViewModel:(id)a0;
- (BOOL)shouldFilterSelf;
- (id)filterDataWithData:(id)a0;
- (id)convertIMUsersToShareCellViewModels:(id)a0;
- (id)useOnlyShowSecUidsToFilterAndSortedSectionData:(id)a0;
- (BOOL)enableGameSharePannel;
- (id)transformShareModelToCellViewModel:(id)a0 shareType:(unsigned long long)a1;
- (id)createFlowFakeModelWithShareModel:(id)a0;
- (id)transformDisrecommendShareModelToCellViewModel:(id)a0;
- (id)createFlowFakeModel;
- (void).cxx_destruct;

@end
