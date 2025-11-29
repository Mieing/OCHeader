@class ACCRecordAuthStatus;

@interface ACCLynxRecorderAuthComponent : ACCRecordAuthComponent

@property (retain, nonatomic) ACCRecordAuthStatus *lynxAuthStatus;

- (void)componentDidAppear;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void).cxx_destruct;

@end
