@class NSString;

@interface IESLiveStartKTVSelectedOrderTabSchemaParser : NSObject <IESLiveSchemaParser>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_schema;

- (void)handleSchemeWithModel:(id)a0 fromInside:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)checkScene:(long long)a0;
- (void)fastStartWithModel:(id)a0;
- (BOOL)checkRoomTypeWithModel:(id)a0;
- (BOOL)checkLiveType:(id)a0;
- (BOOL)isConnected;
- (unsigned long long)currentScene;
- (BOOL)isAnchor;

@end
