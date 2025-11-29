@class NSString, NSMutableDictionary;

@interface AWENearbyCardExposureManager : NSObject <AWEPlayVideoMessage>

@property (retain, nonatomic) NSMutableDictionary *cardSerialDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getUnexposedMsgForCode:(long long)a0;

- (void)playerDidReadyForDisplay:(id)a0;
- (id)modelForPlayer:(id)a0;
- (id)storageKey;
- (void)handleCardActionShowWithID:(id)a0 params:(id)a1;
- (void)deleteOutCardSerial;
- (void)localSaveCardSerial;
- (id)getModelWithCardID:(id)a0;
- (id)requestExposureParamsObject;
- (void)recordCardSerialWithCardAction:(unsigned long long)a0 poiCardID:(id)a1 params:(id)a2;
- (id)rejectCardErrorCodeAndReasonWithResp:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addObserver;

@end
