@class NSString, NSArray;

@interface MMFinderLiveUploadTask : NSObject

@property (copy, nonatomic) NSString *taskId;
@property (retain, nonatomic) NSArray *mediaItemArray;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) long long maxRetryCount;
@property (readonly, nonatomic) BOOL isUploadTaskSuccess;
@property (readonly, nonatomic) long long finishType;
@property long long currentRetryCount;
@property long long uploadingMediaCount;

- (id)initWithUploadTaskId:(id)a0 mediaItemArray:(id)a1 maxRetryCount:(long long)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;

@end
