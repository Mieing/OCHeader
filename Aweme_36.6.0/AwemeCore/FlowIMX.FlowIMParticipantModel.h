@class NSString, FlowIMImageModelV2, NSDictionary, FlowIMFlowTTSModel;

@interface FlowIMX.FlowIMParticipantModel : NSObject <FlowIMX.FlowIMParticipant> {
    void /* function */ participantId;
    void /* function */ conversationId;
    void /* function */ name;
    void /* function */ secUid;
    void /* function */ ext;
    void /* function */ description_p;
    void /* function */ bizModel;
}

@property (nonatomic, copy) NSString *participantId;
@property (nonatomic) long long sortOrder;
@property (nonatomic) long long participantType;
@property (nonatomic) long long participantRole;
@property (nonatomic, copy) NSString *conversationId;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *secUid;
@property (nonatomic, retain) FlowIMImageModelV2 *iconImage;
@property (nonatomic, retain) FlowIMFlowTTSModel *voiceType;
@property (nonatomic, copy) NSDictionary *ext;
@property (nonatomic, copy) NSString *description_p;
@property (nonatomic) long long participantStatus;
@property (nonatomic) BOOL voiceMuted;
@property (nonatomic) BOOL canNotInteractWith;
@property (nonatomic, copy) NSString *bizModel;

- (void).cxx_destruct;
- (id)init;

@end
