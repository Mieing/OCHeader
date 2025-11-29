@class NSString, NSSet, NSDictionary;

@interface AWEVoipInfo : NSObject <AWEVoipInfoInterface>

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *callerID;
@property (nonatomic) BOOL isCaller;
@property (copy, nonatomic) NSString *conversationID;
@property (copy, nonatomic) NSSet *participatorIDs;
@property (nonatomic) BOOL firstFrameArrived;
@property (retain, nonatomic) NSDictionary *extraInfo;
@property (nonatomic) BOOL isVoipCallType1V1;
@property (nonatomic) BOOL isMultipleCalls;
@property (nonatomic) BOOL isAudio;
@property (nonatomic) unsigned long long voipType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithVoip:(id)a0;
- (void).cxx_destruct;

@end
