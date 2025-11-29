@class NSString;

@interface AWEFormatSendMessageServiceImpl : HTSService <AWEFormatSendMessageService>

@property (copy, nonatomic) id /* block */ contextGetter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendTextMessage:(id)a0;
- (void)sendTextMessage:(id)a0 localExt:(id)a1 syncExt:(id)a2;
- (void)sendTextMessage:(id)a0 localExt:(id)a1 syncExt:(id)a2 aiExt:(id)a3;
- (void)sendAwemeMessage:(id)a0 localExt:(id)a1 syncExt:(id)a2 aiExt:(id)a3;
- (void)sendAwemeMessage:(id)a0;
- (void).cxx_destruct;

@end
