@class NSString;

@interface MMInputBarPlugin : NSObject <InputBarApi, MMFlutterPlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)plugin;

- (void)onAttachedToEngine:(id)a0;
- (void)onDetachedFromEngine:(id)a0;
- (id)loadShortbarEmojisConfigName:(id)a0 error:(id *)a1;

@end
