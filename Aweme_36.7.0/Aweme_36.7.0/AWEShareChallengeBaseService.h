@class NSString;

@interface AWEShareChallengeBaseService : AWEShareCommonImpl <AWEShareChallenge>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showPanelWithChallenge:(id)a0 extraLogInfo:(id)a1 onViewController:(id)a2;
- (id)contextWithChallenge:(id)a0;
- (id)statsShareChallengeStage;

@end
