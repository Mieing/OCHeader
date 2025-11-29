@class NSMutableDictionary;

@interface IESLiveComponentLeakChecker : NSObject

@property (retain, nonatomic) NSMutableDictionary *checkItemPool;
@property (nonatomic) BOOL enable;
@property (retain, nonatomic) NSMutableDictionary *commonDictionaryInfo;

+ (id)buildInfoDic;
+ (id)leakChecker;

- (void)recordIndex:(id)a0 liveObject:(id)a1;
- (void)checkDeallocAll;
- (void)recordIndex:(id)a0 components:(id)a1 extra:(id)a2;
- (void)deallocRoomWithIndex:(id)a0;
- (void)reportIndex:(id)a0 leaks:(id)a1 extra:(id)a2;
- (id)itemWithIndex:(id)a0 create:(BOOL)a1;
- (id)variableInfo;
- (void)reportLeakWithParams:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)branchName;

@end
