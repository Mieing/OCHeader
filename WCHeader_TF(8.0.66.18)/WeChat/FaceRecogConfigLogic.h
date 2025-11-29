@class NSString, NSDictionary, CdnInfo;
@protocol FaceRecogConfigLogicDelegate;

@interface FaceRecogConfigLogic : MMObject <PBMessageObserverDelegate> {
    CdnInfo *_cdnInfo;
    BOOL _bRSA;
}

@property (nonatomic) unsigned long long bioId;
@property (retain, nonatomic) NSString *configBuffer;
@property (nonatomic) int idcRedirectCount;
@property (retain, nonatomic) NSDictionary *liveSelect;
@property (weak, nonatomic) id<FaceRecogConfigLogicDelegate> delegate;
@property (nonatomic) int bioCheckLiveFlag;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *verifyInfo;
@property (retain, nonatomic) id liveSelectData;
@property (nonatomic) double faceRatio;
@property (nonatomic) unsigned int identifyType;

- (void)dealloc;
- (void)resetConfig;
- (BOOL)isConfigReady;
- (unsigned long long)getBioId;
- (id)getConfigBuffer;
- (BOOL)startGetBioConfigForType:(unsigned int)a0 atScene:(unsigned int)a1;
- (BOOL)startGetBioConfigForType:(unsigned int)a0 atScene:(unsigned int)a1 userTicket:(id)a2 isRsa:(BOOL)a3;
- (BOOL)startRsaGetBioConfigForType:(unsigned int)a0 atScene:(unsigned int)a1 userTicket:(id)a2;
- (void)initCdnInfo;
- (void)unInitCdnInfo;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)handleGetBioConfig:(id)a0;
- (void).cxx_destruct;

@end
