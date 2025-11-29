@protocol AWEIMMessageListElfBotInitiativeExposureService;

@interface AWEIMMessageElfBotInitiativeMessageDisplayComponent : AWEIMFlexComponent

@property (weak, nonatomic) id<AWEIMMessageListElfBotInitiativeExposureService> exposureService;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)cellVisibleLifeCycleChanged:(unsigned long long)a0;
- (void).cxx_destruct;

@end
