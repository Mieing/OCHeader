@class NSString;

@interface FlutterHookChannelPlugin : NSObject <MMFlutterPlugin, FlutterHookChannelHost>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onAttachedToEngine:(id)a0;
- (void)clipboardHasStringWithCompletion:(id /* block */)a0;

@end
