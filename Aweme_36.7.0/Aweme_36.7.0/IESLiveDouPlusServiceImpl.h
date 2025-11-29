@class NSString;

@interface IESLiveDouPlusServiceImpl : NSObject <IESLiveDouPlusService>

@property (nonatomic) BOOL finishDidAppear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackLiveDouPlusEvent:(id)a0 extra:(id)a1;
- (void)trackLiveDouPlusBizEvent:(id)a0 extra:(id)a1;
- (void)liveAudienceFinishWillAppear;
- (void)enterDouplusOrgerWebView:(id)a0;
- (void)__trackLiveAdWithLabel:(id)a0 extra:(id)a1;
- (void)__trackLiveBizEvent:(id)a0 params:(id)a1;

@end
