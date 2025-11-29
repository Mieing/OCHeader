@protocol IESLiveSixDoFStore;

@interface IESLiveSixDoFFragment : IESLiveRoomComponent

@property (retain, nonatomic) id<IESLiveSixDoFStore> sixDofViewModel;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentCreate;
- (void)componentMount;
- (void)componentWillAppear;
- (void)componentDidAppear;
- (void)componentDidDisappear;
- (BOOL)p_enable;
- (void)setupSixDof;
- (void).cxx_destruct;

@end
