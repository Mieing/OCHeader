@class NSMutableDictionary;

@interface WCTogetherTailReporter : NSObject

@property (readonly, nonatomic) NSMutableDictionary *operationDictionary;
@property (nonatomic) long long scene;

- (id)getOrCreateOperationWithDataItem:(id)a0;
- (void)clearOperationDictionary;
- (BOOL)isDataItemValid:(id)a0;
- (void)didDisplayDataItem:(id)a0;
- (void)didClickDataItem:(id)a0;
- (void)report;
- (id)generateLogStringWithOperation:(id)a0;
- (void).cxx_destruct;

@end
