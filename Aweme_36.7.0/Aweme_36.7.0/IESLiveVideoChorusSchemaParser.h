@class NSString;

@interface IESLiveVideoChorusSchemaParser : NSObject <IESLiveSchemaParser>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_schema;

- (void)handleSchemeWithModel:(id)a0 fromInside:(BOOL)a1 completion:(id /* block */)a2;
- (void)fastStartWithModel:(id)a0;
- (void)openVideoChorusWithModel:(id)a0;
- (void)leaveChatRoomWithLeaveRoomBlock:(id /* block */)a0;
- (BOOL)isVideoSingleLive;
- (BOOL)isAnchor;

@end
