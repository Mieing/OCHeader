@class AWEPrivacyThreadModuleInstance;

@interface AWEPrivacyThreadDispatchWrapperObject : NSObject

@property (nonatomic) SEL sel;
@property (retain, nonatomic) id arg;
@property (retain, nonatomic) AWEPrivacyThreadModuleInstance *instance;

- (void).cxx_destruct;

@end
