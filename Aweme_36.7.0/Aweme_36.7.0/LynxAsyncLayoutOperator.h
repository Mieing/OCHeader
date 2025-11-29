@class NSString;

@interface LynxAsyncLayoutOperator : NSObject <LynxServiceAsyncLayoutOperator>

@property (nonatomic) BOOL enableCache;
@property (nonatomic) BOOL enableUIFlush;
@property (copy, nonatomic) id /* block */ triggerLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;

@end
