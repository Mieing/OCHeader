@class NSString, HostPathMatchConfig, NSArray;

@interface QueryFilterAction : NSObject

@property (copy, nonatomic) NSString *action;
@property (nonatomic) long long actionPriority;
@property (nonatomic) long long setReqPriority;
@property (retain, nonatomic) HostPathMatchConfig *matchConfig;
@property (retain, nonatomic) NSArray *removeList;
@property (retain, nonatomic) NSArray *keepList;
@property (retain, nonatomic) NSArray *addList;
@property (retain, nonatomic) NSArray *encryptQueryList;
@property (nonatomic) BOOL bodyEncryptEnabled;

+ (id)convertQueryStringWithOrder:(id)a0;

- (id)initWithAction:(id)a0 actPriority:(long long)a1 matchConfig:(id)a2;
- (void)doActionInternal:(id *)a0 withQueryString:(id)a1 reqPriority:(long long *)a2 isHit:(BOOL *)a3 queryFilterResult:(id *)a4;
- (void)removeQuery:(id)a0 according2RmList:(id)a1 queryFilterResult:(id *)a2;
- (void)removeQuery:(id)a0 according2KeepList:(id)a1 queryFilterResult:(id *)a2;
- (void)markQueryIndex:(id)a0 according2List:(id)a1 filterResult:(id *)a2 actionType:(int)a3;
- (void)takeAction:(id *)a0 withUrlString:(id)a1 reqPriority:(long long *)a2 isHit:(BOOL *)a3 queryFilterResult:(id *)a4;
- (long long)getRequestPriority;
- (id)parseActionFromDict:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
