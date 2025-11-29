@class NSArray;

@interface ACCMusicDefaultListManager : NSObject

@property (retain, nonatomic) NSArray *musicList;

+ (void)fetchWithUris:(id)a0 completion:(id /* block */)a1;
+ (void)fetchWithUri:(id)a0 completion:(id /* block */)a1;
+ (id)sharedManager;
+ (void)fetchWithCompletion:(id /* block */)a0;

- (void)loadMusicList;
- (id)cacheListWithUri:(id)a0;
- (id)cacheKeyWithUri:(id)a0;
- (id)cacheDateKeyWithUri:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
