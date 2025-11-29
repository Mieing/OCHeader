@class NSString;

@interface FLTLiveFrontEndAdapterPlugin : NSObject <MMFlutterPlugin, LiveFrontEndAdapterApi>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onAttachedToEngine:(id)a0;
- (void)onDetachedFromEngine:(id)a0;
- (void)openMiniAppAppID:(id)a0 path:(id)a1 scene:(long long)a2 pageType:(unsigned long long)a3 animationType:(id)a4 enableTapExpand:(BOOL)a5 enableDragExpand:(BOOL)a6 nativeExtra:(id)a7 error:(id *)a8;

@end
