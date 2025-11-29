@class NSString;

@interface AWEIMSleepNoticeManager : NSObject <IESIMSleepNoticeInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedIntance;
+ (Class)aAWEIMModuleServiceHTSAdaperClass;

- (id)aAWEIMModuleServiceHTSAdaper;
- (id)p_sleepNoticeFlagKey:(id)a0;
- (id)p_sleepNoticeCountKey;
- (id)p_sleepNoticeDateKey;
- (void)trackSleepNoticeClick;
- (BOOL)canShowSleepNotice:(id)a0 message:(id)a1;
- (void)showSleepNoticePopupView;
- (void)trackSleepNoticeShow;
- (void)setSleepNotice:(long long)a0;

@end
