@class NSString, FinderFlutterAPI;

@interface FinderPlugin : NSObject <FinderNativeAPI, MMFlutterPlugin>

@property (retain, nonatomic) FinderFlutterAPI *flutterAPI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)plugin;

@end
