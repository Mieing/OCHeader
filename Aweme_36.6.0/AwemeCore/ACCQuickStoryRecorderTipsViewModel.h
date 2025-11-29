@class NSString, RACSubject, RACSignal, NSNumber;

@interface ACCQuickStoryRecorderTipsViewModel : ACCRecorderViewModel <ACCQuickStoryRecorderTipsService>

@property (copy, nonatomic) NSString *showingTips;
@property (copy, nonatomic) NSNumber *showingTipsToken;
@property (retain, nonatomic) RACSubject *switchLengthViewShowIfNeededSubject;
@property (retain, nonatomic) RACSignal *switchLengthViewShowIfNeededSignal;
@property (retain, nonatomic) RACSubject *recordBubbleTipsShownSubject;
@property (retain, nonatomic) RACSubject *recordBubbleTipsShownSignal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)showRecordHintLabel:(id)a0 exclusive:(BOOL)a1;
- (id)showRecordHintLabel:(id)a0;
- (void)hideRecordHintLabel;
- (void)hideRecordHintLabelWithToken:(id)a0;
- (void)shouldShowSwitchLengthView:(BOOL)a0;
- (void)willChangeRecordBubble:(BOOL)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
