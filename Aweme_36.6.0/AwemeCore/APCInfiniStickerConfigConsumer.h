@class NSString;

@interface APCInfiniStickerConfigConsumer : APCConfigBaseConsumer <ACCConfigConsumer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupStickersWithProject:(id)a0 stickerConfig:(id)a1 quickFlashConfig:(id)a2 result:(id)a3;
- (id)p_editorCoreWithProject:(id)a0;
- (void)setupTextStickersWithProject:(id)a0 config:(id)a1 index:(long long)a2 context:(id)a3;
- (void)updateUserInfo:(id)a0 byBasic:(id)a1;
- (void)executeWithCompletion:(id /* block */)a0;

@end
