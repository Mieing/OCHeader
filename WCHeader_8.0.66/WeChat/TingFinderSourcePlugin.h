@class NSString;

@interface TingFinderSourcePlugin : NSObject <MMFlutterPlugin, TingFinderSourceApi>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestMediaInfoFinderInfo:(id)a0 completion:(id /* block */)a1;
- (void)onAttachedToEngine:(id)a0;
- (void)onDetachedFromEngine:(id)a0;

@end
