@class NSString, NSDictionary;

@interface IESGCPPreloadTask : NSObject

@property (copy, nonatomic) NSString *taskId;
@property (copy, nonatomic) NSDictionary *taskParams;
@property (copy, nonatomic) NSString *preloadId;
@property (copy, nonatomic) id /* block */ preloadAction;

- (id)initWithTaskId:(id)a0 params:(id)a1 preloadAction:(id /* block */)a2;
- (void)execute:(id /* block */)a0;
- (void).cxx_destruct;

@end
