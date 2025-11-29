@class NSString;

@interface CJPayAnniexWebArgusBussiness : NSObject <ArgusWebBizServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)serviceScope;
+ (id)serviceBizID;
+ (unsigned long long)serviceType;

- (id)argus_bizId;
- (BOOL)shouldBlockJSBCall:(id)a0 url:(id)a1 methodName:(id)a2 params:(id)a3;

@end
