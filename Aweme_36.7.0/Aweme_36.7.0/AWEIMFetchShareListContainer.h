@class NSMutableArray;

@interface AWEIMFetchShareListContainer : NSObject

@property (nonatomic) unsigned long long capacity;
@property (nonatomic) unsigned long long currentCount;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSMutableArray *filters;
@property (nonatomic) BOOL isAbnormal;

+ (id)containerWithType:(unsigned long long)a0;
+ (id)getTypeName:(unsigned long long)a0;
+ (id /* block */)commonFilter;
+ (id /* block */)disrecommendFilter;
+ (id /* block */)manualRemovedFilter;
+ (id /* block */)foldBoxFilter;
+ (id /* block */)notFriendFilter;
+ (id /* block */)notFriendSingleChatFilter;
+ (id /* block */)groupChatFilter;
+ (id /* block */)notGroupParticipantOrDissolve;
+ (id /* block */)formatChatAwemeTypeFilter;

- (BOOL)checkShareValid:(id)a0 withDatasource:(id)a1;
- (BOOL)isServerAbnormal:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
