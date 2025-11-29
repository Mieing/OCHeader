@class NSArray, NSDictionary, NSString, NSNumber;
@protocol AWEHttpTask;

@interface RTVVoipRingtoneSearchDataSource : NSObject <RTVVoipRingtoneListDataSourceProtocol>

@property (retain, nonatomic) NSArray *musicList;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) unsigned long long cursor;
@property (retain, nonatomic) id<AWEHttpTask> requestTask;
@property (nonatomic) BOOL isDefaultMusicList;
@property (nonatomic) unsigned long long countPerPage;
@property (retain, nonatomic) NSNumber *channelId;
@property (copy, nonatomic) NSDictionary *bizParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)toggleMusic:(id)a0 favorite:(BOOL)a1;
- (void)toggleMusicId:(id)a0 favorite:(BOOL)a1;
- (BOOL)fetchWithParams:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)reset;

@end
