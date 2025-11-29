@class NSString, IESECPDPPreloadConfig, UICollectionView, NSDictionary, NSMutableArray, NSLock;
@protocol IESECGoodsDetailPreloadSubscriber;

@interface IESECGoodsDetailPreloadHandler : NSObject <IESECPdpPreloadHandler>

@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) IESECPDPPreloadConfig *config;
@property (weak, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) id<IESECGoodsDetailPreloadSubscriber> delegate;
@property (retain, nonatomic) NSMutableArray *requestLine;
@property (retain, nonatomic) NSLock *rwlock;
@property (retain, nonatomic) NSDictionary *aheadSceneConfig;
@property (nonatomic) BOOL didTriggerPreload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)queryDictWithSchema:(id)a0;

- (void)setupListView:(id)a0 delegate:(id)a1;
- (void)triggerPreload;
- (void)triggerPreloadAfterPicLoad;
- (void)triggerPreloadWithFirstScreen;
- (void)setupKVOBinding:(id)a0;
- (void)triggerPreloadWithVisibleCells;
- (id)getPdpSchemaWithIndexPath:(id)a0;
- (void)asyncTriggerPreload:(id)a0;
- (id)sortedVisibleIndexPathWithFilterIndex:(id)a0;
- (void)triggerPreloadWhenCollectionViewStop:(id)a0;
- (id)buildRequestParamsWithSchemaArr:(id)a0;
- (void)requestProductListWithParams:(id)a0;
- (void)requestLineAddObject:(id)a0;
- (id)buildUIParamsWithFirstSchema:(id)a0;
- (id)buildRequestParamsForNewSchema:(id)a0;
- (id)buildRequestParamsForOldSchema:(id)a0;
- (id)initWithScene:(id)a0 config:(id)a1;
- (BOOL)isCellCompletelyVisibleAtIndexPath:(id)a0;
- (void).cxx_destruct;

@end
