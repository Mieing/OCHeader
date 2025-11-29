@class NSNumber, NSString;

@interface RTVEffectGameResponseGameInfo : JSONModel <RTVXRInteractionModelProtocol>

@property (retain, nonatomic) NSNumber *gameIdentifier;
@property (copy, nonatomic) NSString *gameName;
@property (retain, nonatomic) NSNumber *gameRoomIdentifier;
@property (retain, nonatomic) NSNumber *fromUserIdentifier;
@property (retain, nonatomic) NSNumber *createAt;
@property (retain, nonatomic) NSNumber *expireTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (id)dynamicCast:(Class)a0;
- (id)dynamicCastProtocol:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)interactionType;
- (id)ownerUserID;

@end
