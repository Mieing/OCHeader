@class AWEPageContext;
@protocol AWEPlayInteractionContextProtocol, AWEPlayInteractionStrongifyShareVideoToIMButtonDelegate;

@interface AWEPlayInteractionStrongifyShareVideoToIMActionForShowHandler : NSObject

@property (weak, nonatomic) AWEPageContext<AWEPlayInteractionContextProtocol> *context;
@property (nonatomic) BOOL canShow;
@property (weak, nonatomic) id<AWEPlayInteractionStrongifyShareVideoToIMButtonDelegate> showButtonDelegate;

+ (BOOL)isSameDayWithDate1:(id)a0 date2:(id)a1;
+ (id)chineseTimeZoneCalendar;
+ (BOOL)shouldShowAfterOutShareReturnWithContext:(id)a0;
+ (void)updateFrequencyControlForOuterShare;
+ (BOOL)p_shouldShowStrongifyShareToIMEntranceAfterOuterShareBaseConditionWithContext:(id)a0;
+ (BOOL)p_checkCanShowFeedFastShareButtonFrequencyControlForOuterShare;
+ (BOOL)shouldShowBasicConditionWithContext:(id)a0;
+ (void)updateFrequencyControlWithTriggerType:(long long)a0;

- (void)setupBinding;
- (void)handleOutShareBackNoti:(id)a0;
- (void)fetchShareModelAndShowButtonWithTriggerType:(long long)a0;
- (BOOL)shouldShowWithTriggerType:(long long)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)dealloc;

@end
