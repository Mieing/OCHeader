@class NSString;

@interface TMPrivacyProtocolModule : TMModule <TMPrivacyProtocolService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)privacyProtocolWithKey:(id)a0;

- (void)start;
- (id)initWithConfig:(id)a0;

@end
