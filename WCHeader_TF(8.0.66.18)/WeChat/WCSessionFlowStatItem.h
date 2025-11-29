@class NSString, NSMutableArray;

@interface WCSessionFlowStatItem : MMObject <NSCopying>

@property (nonatomic) unsigned int pId;
@property (retain, nonatomic) NSString *pName;
@property (nonatomic) unsigned long long enterTimestampMs;
@property (nonatomic) unsigned long long quitTimestampMs;
@property (nonatomic) unsigned long long interval;
@property (nonatomic) unsigned int seq;
@property (retain, nonatomic) NSMutableArray *sessionFlows;
@property (retain, nonatomic) NSMutableArray *mergeInfos;
@property (retain, nonatomic) NSMutableArray *matchPagePaths;
@property (retain, nonatomic) NSMutableArray *mergePagePathInfos;
@property (retain, nonatomic) NSMutableArray *businessDatas;
@property (retain, nonatomic) NSMutableArray *viewOperations;
@property (retain, nonatomic) NSMutableArray *businessDataFilterCache;
@property (nonatomic) unsigned int flowSeq;
@property (nonatomic) BOOL isReport;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)toString;
- (void).cxx_destruct;

@end
