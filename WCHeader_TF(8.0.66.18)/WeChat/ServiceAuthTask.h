@class NSString, ServiceAuthConfig;
@protocol ServiceAuthTaskDelegate;

@interface ServiceAuthTask : NSObject

@property (retain, nonatomic) NSString *taskId;
@property (weak, nonatomic) id<ServiceAuthTaskDelegate> delegate;
@property (retain, nonatomic) ServiceAuthConfig *config;

+ (id)taskWithConfig:(id)a0 delegate:(id)a1;

- (id)init;
- (void)startTask;
- (void).cxx_destruct;

@end
