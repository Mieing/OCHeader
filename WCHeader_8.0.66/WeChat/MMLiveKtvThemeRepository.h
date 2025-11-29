@class NSMutableDictionary, MMLiveQueue;

@interface MMLiveKtvThemeRepository : NSObject

@property (retain, nonatomic) NSMutableDictionary *items;
@property (retain, nonatomic) MMLiveQueue *requests;

- (id)init;
- (void)fetchThemeWithId:(id)a0 fetchingProvider:(id)a1 completionBlock:(id /* block */)a2;
- (void)fetchAllThemesWithFetchingProvider:(id)a0 completionBlock:(id /* block */)a1;
- (void)invokeFrontTask;
- (void).cxx_destruct;

@end
