@class AWEPlayletContinuePlayRequestConfig;

@interface AWEPlayletContinuePlayDataSourceFactory : NSObject

@property (retain, nonatomic) AWEPlayletContinuePlayRequestConfig *config;
@property (copy, nonatomic) id /* block */ traceWithEvent;

- (void)savePlayletContinuePlayLog:(id)a0;
- (id)dataControllerWithConfig:(id)a0;
- (void).cxx_destruct;

@end
