@class NSString;
@protocol IESLiveFullLinkMonitor;

@interface IESLiveRoomSchemaParser : IESLiveRoomSchemaBaseParser <IESLiveSchemaParser>

@property (retain, nonatomic) id<IESLiveFullLinkMonitor> fullLinkMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_schema;

- (void)handleSchemeWithModel:(id)a0 fromInside:(BOOL)a1 completion:(id /* block */)a2;
- (void)playbackEnterRoomWithParams:(id)a0 completion:(id /* block */)a1;
- (void)reportMonitorDataEnterFrom:(id)a0 enterMethod:(id)a1 statusCode:(long long)a2 extra:(id)a3;
- (void)liveEnterRoomWithParams:(id)a0 completion:(id /* block */)a1;
- (void)switchToProfile:(id)a0 isFirstPlay:(BOOL)a1 showToast:(BOOL)a2 completion:(id /* block */)a3;
- (long long)stickerStatusWithLiveStatus:(int)a0 isFirstPlay:(BOOL)a1;
- (void)checkLiveStatus:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
