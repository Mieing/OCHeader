@class NSString, AWEIMImageTracker;

@interface AWEIMImageRequest : NSObject

@property (copy) NSString *requestKey;
@property (retain) AWEIMImageTracker *tracker;
@property (copy) id /* block */ completionBock;

- (id)initWithKey:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
