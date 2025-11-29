@class NSString, NSMutableSet, HTSLiveUser;
@protocol IESLiveRoomService;

@interface IESLiveGiftDisplayPipelineContextHolder : NSObject <IESLiveGiftDisplayPiplineContext>

@property (nonatomic) BOOL isAllMic;
@property (retain, nonatomic) HTSLiveUser *toUser;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (nonatomic) unsigned long long currentInteractiveScene;
@property (retain, nonatomic) NSMutableSet *assetCheckNotPassIds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
