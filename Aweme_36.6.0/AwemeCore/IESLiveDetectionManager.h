@class NSString, IESLiveDetectionActions, IESLiveDetectionAnchorEngine, IESLiveDetectionConfig;
@protocol IESLiveRoomService;

@interface IESLiveDetectionManager : NSObject <IESLiveDetectionRoomProtocol, IESLiveDetectionService>

@property (retain, nonatomic) IESLiveDetectionConfig *config;
@property (retain, nonatomic) IESLiveDetectionAnchorEngine *anchorEngine;
@property (retain, nonatomic) IESLiveDetectionActions *actions;
@property (copy, nonatomic) id /* block */ userCountBlock;
@property (weak, nonatomic) id<IESLiveRoomService> roomService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (id)roomType;
- (void)startDetectorWithRoom:(id)a0 isResume:(BOOL)a1;
- (void)stopDetector;
- (void)addVideoGiftFeature:(id)a0;
- (void)addEffectGiftFeature:(id)a0;
- (void)addLynxGiftFeature:(id)a0;
- (void)addLiveMonitorFeature:(id)a0 params:(id)a1;
- (void)addChatMessageFeature:(id)a0;
- (void)anchorReceiveBlockMessage:(id)a0;
- (void)addEvent:(id)a0 params:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)userCount;
- (id)roomID;

@end
