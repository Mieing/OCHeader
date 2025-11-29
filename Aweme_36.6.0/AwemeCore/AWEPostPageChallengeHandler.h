@class NSString;
@protocol AWEPostPageContext;

@interface AWEPostPageChallengeHandler : NSObject <AWEPostPageChallengeService>

@property (nonatomic) BOOL challengeSwitchStatesSignal;
@property (retain, nonatomic) NSString *challengeTitleSignal;
@property (retain, nonatomic) NSString *hashTagTitleSignal;
@property (nonatomic) long long continueWriteHashChooseSignal;
@property (readonly, nonatomic) id<AWEPostPageContext> context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterPostPage;

- (void)bindServices:(id)a0;
- (void)sendChallengeSwitchStatesSignal:(BOOL)a0;
- (void)sendChallengeTitleSignal:(id)a0;
- (void)sendHashTagTitleSignal:(id)a0;
- (void)sendContinueWriteHashChooseSignal:(long long)a0;
- (void).cxx_destruct;

@end
