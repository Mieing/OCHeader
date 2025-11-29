@class NSString;

@interface KindaFlutterPlugin : NSObject <MMFlutterPlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)plugin;

@end
