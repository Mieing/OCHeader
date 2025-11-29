@class NSString, NSMutableDictionary, NSMutableSet, NSArray;

@interface AWEIMFTSDataResult : NSObject <AWEIMFTSDataReultProtocol>

@property (retain) NSMutableDictionary *dataQueues;
@property (retain) NSMutableSet *dataKeySet;
@property (nonatomic) unsigned long long pageCount;
@property (copy, nonatomic) NSString *conversationId;
@property (copy, nonatomic) NSArray *keywords;
@property (copy, nonatomic) NSArray *messageTypes;
@property (copy, nonatomic) NSArray *aweTypes;
@property (copy, nonatomic) NSArray *extTypes;
@property (copy, nonatomic) NSArray *contentTypes;
@property (copy) id /* block */ duplicateKeyForDataBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadDataBeforeSortOrder:(long long)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)addDataSource:(id)a0;
- (void)removeDataSource:(id)a0;

@end
