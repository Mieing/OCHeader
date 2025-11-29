@protocol IESLiveDetectionRoomProtocol;

@interface IESLiveDetectionActions : NSObject

@property (nonatomic) BOOL imClosed;
@property (nonatomic) BOOL lockAction;
@property (weak, nonatomic) id<IESLiveDetectionRoomProtocol> roomDelegate;

+ (id)sharedActions;

- (id)userInfoAction:(id)a0;
- (id)closeIMAction:(id)a0;
- (id)resumeIMAction:(id)a0;
- (id)pushAbnormalWithAPI:(id)a0;
- (id)pushAbnormalWithTracker:(id)a0;
- (id)getThreadInfoAction:(id)a0;
- (id)dispatchAction:(id)a0 params:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
