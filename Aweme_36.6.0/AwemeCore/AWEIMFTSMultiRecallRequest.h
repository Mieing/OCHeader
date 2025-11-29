@class NSMutableDictionary, NSMutableSet;

@interface AWEIMFTSMultiRecallRequest : AWEIMFTSDataResult

@property (retain) NSMutableDictionary *dataQueues;
@property (retain) NSMutableDictionary *assistantDataQueues;
@property (retain) NSMutableSet *dataKeySet;
@property (retain) NSMutableDictionary *dataDict;
@property (nonatomic) long long currentFlag;
@property (nonatomic) BOOL stop;
@property (copy) id /* block */ addSubDataToPrimeDataBlock;
@property (copy) id /* block */ checkRecallFinishedBlock;

- (void)loadDataBeforeSortOrder:(long long)a0 completion:(id /* block */)a1;
- (void)addDataSource:(id)a0 withConfig:(id)a1 keyElement:(id)a2 isAssistant:(BOOL)a3;
- (void).cxx_destruct;
- (id)init;

@end
