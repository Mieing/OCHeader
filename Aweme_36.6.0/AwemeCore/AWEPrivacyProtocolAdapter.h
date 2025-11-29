@class NSString;

@interface AWEPrivacyProtocolAdapter : NSObject <AWEPrivacyProtocolAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)weakTargetClass;

- (id)defaultPrivacyProtocolWithKey:(id)a0;
- (id)weakTarget;

@end
