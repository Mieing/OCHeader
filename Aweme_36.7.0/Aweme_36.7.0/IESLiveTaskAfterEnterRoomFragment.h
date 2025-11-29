@class NSString;

@interface IESLiveTaskAfterEnterRoomFragment : IESLiveRoomComponent <IESLiveTaskAfterEnterService, HTSLiveStreamPlayerAction>

@property (copy, nonatomic) id /* block */ taskAfterLoad;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentMount;
- (void)streamPlayerDidReadyToRender;
- (void)openSchemaAfterEnter:(id)a0 fromInside:(BOOL)a1;
- (void).cxx_destruct;

@end
