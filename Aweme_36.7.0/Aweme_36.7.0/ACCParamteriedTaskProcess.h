@class NSObject;
@protocol OS_dispatch_group;

@interface ACCParamteriedTaskProcess : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_group> *asyncTaskGroup;

- (void)addAsyncTask:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)runWithCompletion:(id /* block */)a0;

@end
