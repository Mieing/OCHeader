@class NSArray;

@interface ACCMusicListUseCase : NSObject

@property (retain, nonatomic) NSArray *repositoryList;

- (void)requestFavoriteApi:(id)a0 favorite:(BOOL)a1;
- (void)updateRepositoryMusicFavorite:(BOOL)a0 music:(id)a1;
- (void)toggleMusicId:(id)a0 favorite:(BOOL)a1;
- (id)initWithRepositoryList:(id)a0;
- (void).cxx_destruct;
- (void)toggleFavorite:(id)a0;

@end
