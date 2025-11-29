@class NSString, NSMutableDictionary, IESLiveGameOpenPlatformInteractMediaOpenAPIService, IESLiveGameOpenPlatformSEIService, IESLiveGameOpenPlatformAudienceAPI, IESLiveGameOpenPlatformContainerService, IESLiveGameOpenPlatformAnchorAPI;
@protocol IESLiveRoomService;

@interface IESLiveGameOpenPlatformCommunicationService : NSObject <IESLiveGameOpenPlatformCommunicationServiceInterface>

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) NSMutableDictionary *connectionIDs;
@property (retain, nonatomic) NSMutableDictionary *seqNumberGenerators;
@property (copy, nonatomic) id /* block */ packExtraMethod;
@property (retain, nonatomic) IESLiveGameOpenPlatformSEIService *SEIService;
@property (retain, nonatomic) IESLiveGameOpenPlatformContainerService *containerSerivce;
@property (retain, nonatomic) IESLiveGameOpenPlatformInteractMediaOpenAPIService *mediaOpenAPIService;
@property (retain, nonatomic) IESLiveGameOpenPlatformAnchorAPI *anchorAPI;
@property (retain, nonatomic) IESLiveGameOpenPlatformAudienceAPI *audienceAPI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)foundationAPIServiceInterface;
- (id)commonOpenAPIServiceInterface;
- (id)anchorOpenAPIServiceInterface;
- (id)SEIServiceInterface;
- (id)audienceOpenAPIServiceInterface;
- (id)containerServiceInterface;
- (id)mediaServiceInterface;
- (void)startApp:(id)a0 connectionID:(id)a1;
- (void)stopApp:(id)a0;
- (void)stopAllApps;
- (id)connectionIDForApp:(id)a0;
- (id)initWithRoom:(id)a0 DIContext:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
