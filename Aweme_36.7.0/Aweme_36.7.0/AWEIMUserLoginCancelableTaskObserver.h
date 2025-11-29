@class NSString;
@protocol IESIMCancelableTask;

@interface AWEIMUserLoginCancelableTaskObserver : NSObject <AWEIMUserLoginCancelableTask>

@property (nonatomic) BOOL isCancelled;
@property (retain, nonatomic) id<IESIMCancelableTask> cancelable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)cancel;

@end
