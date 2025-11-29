@class NSString;

@interface AWEIMMessageListStickerModule : AWEIMMessageListModule <AWEIMMessageListStickerModuleInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMounted:(id)a0;
- (id)init;

@end
