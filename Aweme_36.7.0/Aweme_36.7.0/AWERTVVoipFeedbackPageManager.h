@class NSString;
@protocol RTVVoipSettingManagerInterface, RxInjector, RTVVoipStorageAreaInterface;

@interface AWERTVVoipFeedbackPageManager : NSObject <RTVVoipFeedbackPageManagerInterface>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVVoipSettingManagerInterface> settingManager;
@property (readonly, nonatomic) id<RTVVoipStorageAreaInterface> storage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (void)showFeedbackPageIfNeededWithVoip:(id)a0;
- (id)__feedbackSettings;
- (BOOL)__shouldShowFeedbackWithVoip:(id)a0;
- (long long)__randomIntegerBetweenMin:(long long)a0 andMax:(long long)a1;
- (void)__showFeedbackPage:(id)a0;
- (void).cxx_destruct;

@end
