@class NSError, NSString, AWEAwemeResponseModel;
@protocol AWEHttpTask;

@interface AWELongVideoPrefetchAwemeBundle : NSObject

@property (weak, nonatomic) id<AWEHttpTask> requestAwemeModelTask;
@property (retain, nonatomic) AWEAwemeResponseModel *responseModel;
@property (retain, nonatomic) NSError *responseError;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) NSString *awemeID;
@property (copy, nonatomic) NSString *albumID;
@property (copy, nonatomic) NSString *episodeID;
@property (copy, nonatomic) NSString *highlightEpisodeId;

- (BOOL)shouldReuseForAwemeID:(id)a0 albumID:(id)a1 episodeID:(id)a2 highlightEpisodeID:(id)a3;
- (BOOL)isString:(id)a0 sameWith:(id)a1;
- (void).cxx_destruct;

@end
