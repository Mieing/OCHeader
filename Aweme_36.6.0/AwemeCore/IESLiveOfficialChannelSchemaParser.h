@class NSString;
@protocol IESLiveContainerRouter;

@interface IESLiveOfficialChannelSchemaParser : NSObject <IESLiveSchemaParser>

@property (retain, nonatomic) id<IESLiveContainerRouter> containerRouter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_schema;

- (void)handleSchemeWithModel:(id)a0 fromInside:(BOOL)a1 completion:(id /* block */)a2;
- (void)p_parseRoomWithRoomID:(id)a0 anchorID:(id)a1 parameter:(id)a2 completion:(id /* block */)a3;
- (void)fetchOfficialChannelRoomWithUID:(id)a0 callback:(id /* block */)a1;
- (void)openRoom:(id)a0 parameter:(id)a1 completion:(id /* block */)a2;
- (void)handleActionsAfterEnterRoomWithParameter:(id)a0;
- (void).cxx_destruct;

@end
