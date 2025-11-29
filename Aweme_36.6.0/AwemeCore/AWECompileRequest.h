@class NSString;

@interface AWECompileRequest : NSObject <AWEPublishCompilerSubscriber>

@property long long type;
@property (getter=isExecuting) BOOL executing;
@property (getter=isFinished) BOOL finished;
@property (copy, nonatomic) id /* block */ block;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onCompilerAvailable;
- (void)onUserRemoval;
- (void).cxx_destruct;

@end
