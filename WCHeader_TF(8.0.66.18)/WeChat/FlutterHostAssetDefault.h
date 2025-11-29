@class NSString;

@interface FlutterHostAssetDefault : NSObject <FlutterHostAssetHandler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)loadWithKey:(id)a0;
- (id)loadStringWithKey:(id)a0;

@end
