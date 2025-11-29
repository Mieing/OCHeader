@class NSString;
@protocol AWEHttpTask;

@interface IESLiveHTTPTaskWrapper : NSObject <IESLiveHTTPTask>

@property (retain, nonatomic) id<AWEHttpTask> httpTask;
@property (readonly) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithHTTPTask:(id)a0;
- (void).cxx_destruct;
- (void)suspend;
- (void)resume;
- (void)cancel;

@end
