@class NSString;
@protocol AWEHttpTask;

@interface IESECHTTPTaskAwemeWrapper : NSObject <IESECHTTPRequestTask>

@property (retain, nonatomic) id<AWEHttpTask> rawTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskWrapperWithAWEHttpTask:(id)a0;

- (void).cxx_destruct;
- (void)suspend;
- (void)setPriority:(float)a0;
- (void)resume;
- (void)cancel;

@end
