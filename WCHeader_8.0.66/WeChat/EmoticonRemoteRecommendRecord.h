@class NSString, NSMutableArray;

@interface EmoticonRemoteRecommendRecord : NSObject <PBCoding>

@property (retain, nonatomic) NSString *query;
@property (retain, nonatomic) NSMutableArray *wrapList;
@property (nonatomic) unsigned int lastUpdateTime;
@property (retain, nonatomic) NSString *recSessionId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_query;
+ (void)PBArrayAdd_wrapList;
+ (void)PBArrayAdd_lastUpdateTime;
+ (void)PBArrayAdd_recSessionId;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (BOOL)isExpired:(unsigned int)a0;
- (void).cxx_destruct;

@end
