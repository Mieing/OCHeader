@class IESLiveGuideInterceptApi, NSDictionary;

@interface IESLiveGuideInterceptOperation : NSOperation {
    BOOL _executing;
    BOOL _finished;
}

@property (retain, nonatomic) IESLiveGuideInterceptApi *api;
@property (copy, nonatomic) id /* block */ interceptCompletion;
@property (copy, nonatomic) NSDictionary *params;

- (void).cxx_destruct;
- (void)setExecuting:(BOOL)a0;
- (void)setFinished:(BOOL)a0;
- (id)init;
- (BOOL)isAsynchronous;
- (void)start;
- (BOOL)isExecuting;
- (BOOL)isFinished;

@end
