@class NSString;
@protocol IESLiveTimorService, IESLiveRoomService;

@interface IESLiveOpenGameMiniAppModelSchemaParser : NSObject <IESLiveSchemaParser>

@property (retain, nonatomic) id<IESLiveTimorService> timorService;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_schema;

- (void)handleSchemeWithModel:(id)a0 fromInside:(BOOL)a1 completion:(id /* block */)a2;
- (id)buildTimorBdpLogParamsWith:(id)a0 bdpLogStr:(id *)a1;
- (void).cxx_destruct;

@end
