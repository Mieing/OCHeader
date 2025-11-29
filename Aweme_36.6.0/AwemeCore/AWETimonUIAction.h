@class NSDictionary, NSString;

@interface AWETimonUIAction : NSObject <AWEPrivacyThreadAspector>

@property (copy, nonatomic) NSDictionary *realActionInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)aspectorName;
- (void)willDispatch:(id)a0;
- (void)actionBeforeBlockInvoke:(id)a0;
- (void)actionAfterBlockInvoked:(id)a0;
- (void)didEndDispatch:(id)a0;
- (void).cxx_destruct;

@end
