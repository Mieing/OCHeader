@class NSString;

@interface RxOperationTimeoutObserver : NSObject <RxOperationObserver>

@property (readonly, nonatomic) double timeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
