@class NSString;
@protocol IESLiveAnchorRecordPreferenceService, IESLiveAnchorGiftPreferenceService, IESLiveAskExplainPreferenceService, IESLiveAnchorTimeSchedulePreference;

@interface IESLiveAnchorPreferenceIMP : NSObject <IESLiveAnchorPreferenceService>

@property (retain, nonatomic) id<IESLiveAnchorRecordPreferenceService> recordPreference;
@property (retain, nonatomic) id<IESLiveAnchorTimeSchedulePreference> timeNoticePref;
@property (retain, nonatomic) id<IESLiveAnchorGiftPreferenceService> giftPreference;
@property (retain, nonatomic) id<IESLiveAskExplainPreferenceService> askExplainPreference;
@property (nonatomic) BOOL fansGroupChatAllowed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)markEntryShown;
- (BOOL)isEntryShownBefore;
- (void).cxx_destruct;

@end
