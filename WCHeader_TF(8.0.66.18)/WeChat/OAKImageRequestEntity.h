@interface OAKImageRequestEntity : NSObject

@property (nonatomic) unsigned int taskID;
@property (nonatomic) int phRequestID;
@property (nonatomic) BOOL isRequestLivePhotoVideo;
@property (copy, nonatomic) id /* block */ imageDataCompletionHandler;
@property (copy, nonatomic) id /* block */ assetCompletionHandler;
@property (copy, nonatomic) id /* block */ livePhotoCompletionHandler;

+ (id)entityWithTaskID:(unsigned int)a0 imageDataCompletionHandler:(id /* block */)a1;
+ (id)entityWithTaskID:(unsigned int)a0 assetCompletionHandler:(id /* block */)a1;
+ (id)entityWithTaskID:(unsigned int)a0 livePhotoCompletionHandler:(id /* block */)a1;

- (void).cxx_destruct;

@end
