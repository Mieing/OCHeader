@class HTSEventContext, NSMutableDictionary, NSMutableSet, NSString;

@interface IESLiveInteractionPlaymodeManager : NSObject <IESLiveSocialInteractPreLoadExAction, HTSLiveRoomRemoteActions, IESLiveInteractionPlaymodeRouter>

@property (retain, nonatomic) NSMutableSet *playmodeSet;
@property (retain, nonatomic) NSMutableDictionary *playmodeExtraGetterBlockMap;
@property (retain, nonatomic) HTSEventContext *eventContext;
@property (nonatomic) BOOL isAnchor;
@property (nonatomic) BOOL hasJoinChannel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *playTypeForTrack;

+ (id)playModeDic;
+ (id)nameWithIESLiveLinkmicPlayMode:(int)a0;

- (void)didSetAttachingDIContext;
- (void)currentServerLayoutDidChangedFrom:(id)a0 to:(id)a1;
- (void)didJoinChannelWithLayout:(id)a0;
- (void)didLeaveChannelWithLayout:(id)a0;
- (void)didUpdateRoom:(id)a0 timeStamp:(id)a1;
- (void)startPlaymodeWithType:(int)a0 playmode:(long long)a1 source:(id)a2;
- (void)endPlaymodeWithType:(int)a0 playmode:(long long)a1 source:(id)a2;
- (id)currentPlaymodes;
- (id)currentPlaymodesWithAdditionPlaymode:(id)a0;
- (id)currentPlaymodesWithAdditionPlaymodeArray:(id)a0;
- (int)playModeWithName:(id)a0;
- (void)startPlaymodeWithPlaymodeName:(id)a0;
- (void)startPlaymodeWithPlaymodeName:(id)a0 source:(id)a1;
- (void)startPlaymodeWithPlaymodeName:(id)a0 source:(id)a1 extraDic:(id)a2;
- (void)startPlaymodeWithPlaymodeName:(id)a0 source:(id)a1 extraUsingBlock:(id /* block */)a2;
- (void)startPlaymodesWithPlaymodeNameArray:(id)a0;
- (void)startPlaymodesWithPlaymodeNameArray:(id)a0 source:(id)a1;
- (void)startPlaymodesWithPlaymodeNameArray:(id)a0 source:(id)a1 extraDic:(id)a2;
- (void)endPlaymodeWithPlaymodeName:(id)a0;
- (void)endPlaymodeWithPlaymodeName:(id)a0 source:(id)a1;
- (void)endPlaymodeWithPlaymodeName:(id)a0 source:(id)a1 extraDic:(id)a2;
- (void)endPlaymodesWithPlaymodeNameArray:(id)a0;
- (void)endPlaymodesWithPlaymodeNameArray:(id)a0 extraDic:(id)a1;
- (void)endPlaymodesWithPlaymodeNameArray:(id)a0 source:(id)a1 extraDic:(id)a2;
- (void)endAllPlaymodes;
- (void)dynamicContainer:(id)a0 didStartPlaymode:(id)a1 extra:(id)a2;
- (void)dynamicContainer:(id)a0 didEndedPlaymode:(id)a1 extra:(id)a2;
- (void)updatePlaymodesWithRoom:(id)a0;
- (void)trackPlaymodeOpen:(id)a0 extraDict:(id)a1;
- (void)updateEventContextParams;
- (void)updatePerfSamplerMultiInfo;
- (void)trackPlaymodeOver:(id)a0 extraDict:(id)a1;
- (id)currentPlayModesInModeArray:(id)a0;
- (void).cxx_destruct;

@end
