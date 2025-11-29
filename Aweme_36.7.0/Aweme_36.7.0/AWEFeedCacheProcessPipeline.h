@class NSArray;

@interface AWEFeedCacheProcessPipeline : NSObject

@property (nonatomic) long long status;
@property (nonatomic) long long cursor;
@property (retain, nonatomic) NSArray *processors;
@property (copy, nonatomic) id /* block */ completedListener;
@property (copy, nonatomic) id /* block */ failureListener;

- (id)syncProcess:(id)a0;
- (id)initWithProcessors:(id)a0 completedListener:(id /* block */)a1 failureListener:(id /* block */)a2;
- (void)failure:(id)a0;
- (void)process:(id)a0;
- (void).cxx_destruct;
- (void)completed;

@end
