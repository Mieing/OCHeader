@class NSArray, NSMutableDictionary, NSDictionary, NSString, NSNumber;
@protocol AWEHttpTask;

@interface RTVVoipRingtoneListHistoryDataSource : NSObject <RTVVoipRingtoneListDataSourceProtocol>

@property (retain, nonatomic) NSArray *usedMusicInfos;
@property (retain, nonatomic) NSArray *musicList;
@property (retain, nonatomic) NSMutableDictionary *musicDict;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) unsigned long long cursor;
@property (retain, nonatomic) id<AWEHttpTask> requestTask;
@property (nonatomic) unsigned long long countPerPage;
@property (retain, nonatomic) NSNumber *channelId;
@property (copy, nonatomic) NSDictionary *bizParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupBindings;
- (void)toggleMusic:(id)a0 favorite:(BOOL)a1;
- (void)toggleMusicId:(id)a0 favorite:(BOOL)a1;
- (BOOL)fetchWithParams:(id)a0 completion:(id /* block */)a1;
- (void)toggleMusic:(id)a0 apply:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (void)reset;

@end
