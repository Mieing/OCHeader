@class NSString, IESLiveRightBottomMutuallyExclusiveItem, UIView;

@interface IESLiveCommonCastScreenAudienceService : IESLiveGeneralBaseService <IESLiveSEIListener, IESLiveCommonCastScreenAudienceService>

@property (nonatomic) BOOL isApplet;
@property (nonatomic) BOOL isCastScreening;
@property (copy, nonatomic) NSString *castScene;
@property (copy, nonatomic) NSString *castBizValue;
@property (retain, nonatomic) UIView *placeHolderView;
@property (retain, nonatomic) IESLiveRightBottomMutuallyExclusiveItem *rightBottomItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (id)serviceProtocolsWithParam:(id)a0;
+ (unsigned long long)serviceImmediateLoadTypes;

- (void)serviceDidLaunch;
- (unsigned long long)supportSeiTypes;
- (void)onParseredWithSEIResult:(id)a0;
- (BOOL)roomHasCastScreenInHistory;
- (BOOL)isCastScreeningOnAudience;
- (void)addListenerEvent;
- (void)trackerWithEvent:(id)a0;
- (void)cacheCastScreenEventOnAudience;
- (id)cachedKeyOnAudience;
- (void).cxx_destruct;

@end
