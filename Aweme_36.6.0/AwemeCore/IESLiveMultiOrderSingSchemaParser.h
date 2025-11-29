@class NSString;

@interface IESLiveMultiOrderSingSchemaParser : NSObject <IESLiveSchemaParser>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_schema;

- (void)handleSchemeWithModel:(id)a0 fromInside:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)isInChatRoom;
- (BOOL)isInVideoChatRoom;
- (void)fastStartWithModel:(id)a0;
- (BOOL)isInMultiAudioChatRoom;
- (BOOL)isConnected;
- (unsigned long long)currentScene;
- (BOOL)isAnchor;

@end
