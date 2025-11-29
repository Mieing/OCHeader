@class AWEMusicDataManager, NSString;

@interface AWEMusicOnlyCollectionService : NSObject <AWEMusicCollectionServiceProtocol>

@property (retain, nonatomic) AWEMusicDataManager *apiManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)changeCollectionModel:(id)a0 enterFrom:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
