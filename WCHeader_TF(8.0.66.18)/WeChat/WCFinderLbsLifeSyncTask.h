@class LbsLifeSyncRequest;

@interface WCFinderLbsLifeSyncTask : NSObject

@property (retain, nonatomic) LbsLifeSyncRequest *request;
@property (nonatomic) int syncScene;

+ (id)taskWithRequest:(id)a0;

- (void).cxx_destruct;

@end
