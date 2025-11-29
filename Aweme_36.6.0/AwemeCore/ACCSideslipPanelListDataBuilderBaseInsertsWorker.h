@class NSArray;

@interface ACCSideslipPanelListDataBuilderBaseInsertsWorker : ACCSideslipPanelListDataBuilderBaseWorker

@property (nonatomic) BOOL indexFirst;
@property (nonatomic) BOOL hasBringEffectOfSideSlip;
@property (readonly, copy, nonatomic) NSArray *toBeInsertedIDs;
@property (copy, nonatomic) NSArray *leftCellModels;
@property (copy, nonatomic) NSArray *rightCellModels;

- (void).cxx_destruct;
- (unsigned long long)workerType;

@end
