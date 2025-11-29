@class NSArray, NSDictionary, NSString, NSMutableDictionary, DolphinIndexSetResult;

@interface DolphinRerankContext : NSObject

@property (nonatomic) long long triggerSource;
@property (copy, nonatomic) NSDictionary *additionClientSideParams;
@property (copy, nonatomic) NSArray *dataArray;
@property (nonatomic) long long initialRemoveCnt;
@property (nonatomic) long long innerRerankFloor;
@property (retain, nonatomic) NSString *rerankIdentifier;
@property (copy, nonatomic) NSArray *dataArrayCapture;
@property (retain, nonatomic) NSMutableDictionary *quickSearchDataDict;
@property (copy, nonatomic) NSArray *opDataSource;
@property (copy, nonatomic) NSDictionary *oldAnalyzeDict;
@property (retain, nonatomic) NSDictionary *opAnalyzeDictDolphinId;
@property (retain, nonatomic) DolphinIndexSetResult *diffAnalyze;
@property (copy, nonatomic) NSArray *checkDataArray;
@property (copy, nonatomic) NSArray *insertsWatingRemoveCache;
@property (copy, nonatomic) NSArray *deletesWatingInsertCache;
@property (copy, nonatomic) NSDictionary *pitayaOutputParams;
@property (copy, nonatomic) NSDictionary *opMemoryCache;
@property (copy, nonatomic) NSArray *tasks;
@property (copy, nonatomic) NSDictionary *taskParams;
@property (copy, nonatomic) NSDictionary *trackerParams;
@property (nonatomic) BOOL isCanceling;

- (long long)realRerankFloor;
- (id)initWithTriggerSource:(long long)a0 additionClientSideParams:(id)a1;
- (void).cxx_destruct;

@end
