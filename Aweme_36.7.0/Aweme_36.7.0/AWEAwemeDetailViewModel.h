@class NSString;
@protocol AWEHttpTask;

@interface AWEAwemeDetailViewModel : NSObject

@property (copy, nonatomic) NSString *taskToken;
@property (nonatomic) BOOL gqActivityTaskRequestFailed;
@property (weak, nonatomic) id<AWEHttpTask> gqActivityDoneTask;
@property (readonly, nonatomic) BOOL hasGQActivity;

- (id)initWithRouterParamDict:(id)a0;
- (void)postRequestGQActivityTaskDoneIfNeeded;
- (void).cxx_destruct;
- (void)dealloc;

@end
