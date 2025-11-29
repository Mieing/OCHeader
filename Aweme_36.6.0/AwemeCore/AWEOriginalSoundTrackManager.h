@class NSString;

@interface AWEOriginalSoundTrackManager : NSObject

@property (nonatomic) BOOL isRequestOnAir;
@property (copy, nonatomic) NSString *userID;

+ (void)loadPerformanceListWithUserId:(id)a0 cursor:(id)a1 count:(id)a2 responseBlock:(id /* block */)a3 completion:(id /* block */)a4;

- (id)initWithUserID:(id)a0;
- (void)loadMoreWithCursor:(id)a0 count:(id)a1 scene:(id)a2 responseBlock:(id /* block */)a3 completion:(id /* block */)a4;
- (void)loadMoreWithLoadOptions:(id)a0 scene:(id)a1 responseBlock:(id /* block */)a2 completion:(id /* block */)a3;
- (id)mediaModelWithMusicModel:(id)a0;
- (void).cxx_destruct;

@end
