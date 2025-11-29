@class NSError, NSString, AWELongVideoAlbumModel;
@protocol AWEHttpTask;

@interface AWELongVideoPrefetchMetaInfoBundle : NSObject

@property (weak, nonatomic) id<AWEHttpTask> requestMetaInfoTask;
@property (retain, nonatomic) AWELongVideoAlbumModel *responseModel;
@property (retain, nonatomic) NSError *responseError;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) NSString *albumID;
@property (nonatomic) long long requestFrom;
@property (nonatomic) BOOL isFromTheater;

- (BOOL)shouldReuseForAlbumID:(id)a0 isFromTheater:(BOOL)a1 requestFrom:(long long)a2;
- (BOOL)isString:(id)a0 sameWith:(id)a1;
- (void).cxx_destruct;

@end
