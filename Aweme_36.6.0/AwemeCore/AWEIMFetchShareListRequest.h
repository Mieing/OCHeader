@class AWEIMFetchShareListDatasource, NSArray, NSString, NSMutableArray;

@interface AWEIMFetchShareListRequest : NSObject <AWEIMFetchShareListRequestInterface>

@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSArray *resultList;
@property (readonly, nonatomic) BOOL startImBeforeFetch;
@property (retain, nonatomic) AWEIMFetchShareListDatasource *datasource;
@property (nonatomic) unsigned long long maxCount;
@property (copy, nonatomic) NSArray *containers;
@property (retain, nonatomic) NSMutableArray *decorators;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getSelectionContainers;
+ (id)getSimplifyPanelContainers;
+ (id /* block */)putNormalShareModelAtTheTopDecorator;
+ (id /* block */)insertStickOnTopChatsDecorator;
+ (id /* block */)shieldFansGroupDecorator;
+ (id)messageTabChatListRequsetWithConfigs:(id)a0;
+ (id)defaultRequestWithConfigs:(id)a0;
+ (id /* block */)reduceNormalShareModelDecorator;
+ (id)request;

- (void)setConfigs:(id)a0;
- (void)p_fetchShareList:(id /* block */)a0 afterImStart:(BOOL)a1;
- (void)p_prepareResult:(id)a0;
- (void)p_enumerateContainers:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)p_fetchShareResponseModel:(id /* block */)a0 afterImStart:(BOOL)a1;
- (id)configResponseModel;
- (id)transferContainerTypeToString:(unsigned long long)a0;
- (void)p_recurseContainersAtIndex:(unsigned long long)a0 limitCount:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)fetchShareList:(id /* block */)a0;
- (void)fetchShareReponseModel:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setFilter:(id /* block */)a0;

@end
