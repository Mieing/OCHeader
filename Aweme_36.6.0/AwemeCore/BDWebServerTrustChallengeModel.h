@class NSURLAuthenticationChallenge;

@interface BDWebServerTrustChallengeModel : NSObject

@property (retain, nonatomic) NSURLAuthenticationChallenge *challenge;
@property (copy, nonatomic) id /* block */ challengeCompletion;
@property (copy, nonatomic) id /* block */ ttnetCompletion;

- (void).cxx_destruct;

@end
