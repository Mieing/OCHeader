@class RTVEffectGameResponsePageInfo, RTVEffectGameResponseGameInfo, NSString, RTVEffectGameResponseEndInfo, NSNumber;

@interface RTVEffectGameResponseData : JSONModel <RTVXRInteractionModelProtocol, RTVXRRoomMessageContent>

@property (retain, nonatomic) NSNumber *stage;
@property (retain, nonatomic) NSNumber *version;
@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) NSNumber *gameUniqueID;
@property (retain, nonatomic) RTVEffectGameResponsePageInfo *pageData;
@property (retain, nonatomic) RTVEffectGameResponseGameInfo *gameData;
@property (retain, nonatomic) RTVEffectGameResponseEndInfo *endData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (long long)messageType;

- (id)dynamicCast:(Class)a0;
- (id)dynamicCastProtocol:(id)a0;
- (long long)messageMethod;
- (long long)sendChannel;
- (void).cxx_destruct;
- (unsigned long long)interactionType;
- (id)ownerUserID;

@end
