@class NSString;

@interface BizTransferFlutterPlugin : NSObject <MMFlutterPlugin, BizTransferApi>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onAttachedToEngine:(id)a0;
- (void)transferRequest:(id)a0 completion:(id /* block */)a1;

@end
