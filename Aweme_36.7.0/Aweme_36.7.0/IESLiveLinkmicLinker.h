@class NSString;
@protocol IESLiveLinkmicLinkerDelegate, IESLiveLinkmicCanvasManager;

@interface IESLiveLinkmicLinker : NSObject <IESLiveLinkmicService>

@property (readonly, nonatomic) id<IESLiveLinkmicCanvasManager> canvasManager;
@property (weak, nonatomic) id<IESLiveLinkmicLinkerDelegate> delegate;
@property (nonatomic) long long linkmicUserState;
@property (readonly, copy, nonatomic) NSString *currentLinkmicID;
@property (nonatomic) BOOL needSwitchLinkedState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setLinkmicUserState:(long long)a0 force:(BOOL)a1;
- (void).cxx_destruct;
- (long long)currentState;

@end
