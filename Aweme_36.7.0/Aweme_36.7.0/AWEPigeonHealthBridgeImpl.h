@class NSDictionary, NSString;

@interface AWEPigeonHealthBridgeImpl : NSObject <AWEIronManPigeonProtocol>

@property (copy, nonatomic) NSDictionary *appIdMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)pigeonMethodName;
+ (id)create;

@end
