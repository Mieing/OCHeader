@class NSString;

@interface IESLiveOpenLiveSchemaServiceImpl : NSObject <IESLiveOpenLiveSchemaService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleFixTopicWithOpenLiveParams:(id)a0 isInRoom:(BOOL)a1 fromBottom:(BOOL)a2;
- (void)handleFixStickerWithOpenLiveParams:(id)a0 isInRoom:(BOOL)a1;
- (id)topicKeyInRoom:(BOOL)a0 fromBottom:(BOOL)a1;
- (id)stickerKeyInRoom:(BOOL)a0;
- (void)cleanUp;

@end
