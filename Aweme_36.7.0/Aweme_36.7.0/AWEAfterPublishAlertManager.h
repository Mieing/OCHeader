@class NSString;

@interface AWEAfterPublishAlertManager : NSObject <AWEPublishTaskMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterLoad;
+ (id)sharedManager;

- (void)task:(id)a0 didEndWithResult:(long long)a1 error:(id)a2;
- (void)dealloc;

@end
