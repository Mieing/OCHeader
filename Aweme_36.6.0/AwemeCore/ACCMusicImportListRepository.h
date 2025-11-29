@class NSArray, NSDictionary, NSString, ACCLocalAudioDataController, NSNumber;

@interface ACCMusicImportListRepository : NSObject <ACCMusicImportListRepositoryProtocol>

@property (retain, nonatomic) NSArray *musicList;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) ACCLocalAudioDataController *localAudioDataController;
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
- (unsigned long long)recTypeOfMusic:(id)a0;
- (void)renameLocalMusic:(id)a0 withTitle:(id)a1 completion:(id /* block */)a2;
- (void)deleteLocalMusic:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)reset;

@end
