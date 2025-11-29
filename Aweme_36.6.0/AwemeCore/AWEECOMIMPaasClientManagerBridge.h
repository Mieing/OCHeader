@class NSDictionary;

@interface AWEECOMIMPaasClientManagerBridge : NSObject

@property (copy) NSDictionary *pigeonClientDict;
@property (copy) NSDictionary *imClientDict;

+ (id)shared;

- (id)getPigeonClientWithCustomBizID:(id)a0;
- (id)getIMClientWithCustomBizID:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
