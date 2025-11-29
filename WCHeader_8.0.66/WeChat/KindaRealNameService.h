@class NSString;

@interface KindaRealNameService : NSObject <MMKRealNameService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)checkRealnameLicenseImpl:(int)a0 acceptCallback:(id)a1 denyCallback:(id)a2 requestingCallback:(id)a3 responsedCallback:(id)a4;

@end
