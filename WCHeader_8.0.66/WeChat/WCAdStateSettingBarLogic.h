@class NSString, WCAdStateSettingBarInfo;

@interface WCAdStateSettingBarLogic : WCAdvertiseOperationLogicBase

@property (copy, nonatomic) NSString *tid;
@property (retain, nonatomic) WCAdStateSettingBarInfo *barInfo;
@property (nonatomic) unsigned long long barStyle;
@property (nonatomic) BOOL timerStarted;

+ (id)getStateSettingBarLogicWithDataItem:(id)a0 contentItemScene:(unsigned long long)a1;

- (id)initWithDataItem:(id)a0 contentItemScene:(unsigned long long)a1;
- (void)startTimerIfNeed;
- (void)updateStateSettingBarStyleWithAnimation;
- (void)dealloc;
- (void).cxx_destruct;

@end
