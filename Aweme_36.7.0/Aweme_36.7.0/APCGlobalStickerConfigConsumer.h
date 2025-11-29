@class NSString;

@interface APCGlobalStickerConfigConsumer : APCConfigBaseConsumer <ACCConfigConsumer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)executeWithCompletion:(id /* block */)a0;

@end
