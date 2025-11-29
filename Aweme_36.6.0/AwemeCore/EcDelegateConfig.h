@protocol EcHeimdallrProtocol, EcReachabilityChangedProtocol, EcCoverFetchProtocol, EcUserChangeProtocol, EcTeaProtocol, EcLogProtocol, EcTokenFetchProtocol;

@interface EcDelegateConfig : NSObject

@property (weak, nonatomic) id<EcTeaProtocol> teaDelegate;
@property (weak, nonatomic) id<EcHeimdallrProtocol> heimDelegate;
@property (weak, nonatomic) id<EcLogProtocol> logDelegate;
@property (weak, nonatomic) id<EcReachabilityChangedProtocol> reachabilityDelegate;
@property (weak, nonatomic) id<EcTokenFetchProtocol> tokenFetchDelegate;
@property (weak, nonatomic) id<EcCoverFetchProtocol> coverFetchDelegate;
@property (weak, nonatomic) id<EcUserChangeProtocol> userChangeDelegate;

- (void).cxx_destruct;

@end
