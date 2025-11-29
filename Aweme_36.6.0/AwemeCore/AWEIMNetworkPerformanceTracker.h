@class NSString, NSDictionary;

@interface AWEIMNetworkPerformanceTracker : AWEIMPerformanceTracker <AWEIMNetworkPerformanceTracker>

@property (nonatomic) long long errorCode;
@property (copy, nonatomic) NSString *errorCodeKey;
@property (nonatomic) BOOL sucess;
@property (copy, nonatomic) NSDictionary *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id /* block */)imageLoadTrackCompletionWithEvent:(id)a0 scene:(id)a1 stickerType:(unsigned long long)a2 indexPath:(id)a3 extraParams:(id)a4;

- (id)trackParams;
- (void).cxx_destruct;
- (id)init;

@end
