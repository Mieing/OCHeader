@class NSString;

@interface AWEIMTextMessageViewModel : AWEIMMessageViewModel <AWEIMElderlyPeopleAnswerResultProtocol>

@property (nonatomic) BOOL hasTrackDataForEntryShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupWithMessage:(id)a0;
- (void)updateElderlyPeopleAnswerPassWithId:(long long)a0;
- (void)updateElderlyPeopleAnswerFailWithId:(long long)a0;
- (void)trackDataForEntryShow;
- (void)openSafeExamPage;
- (BOOL)shouldUseHightLightBubbleColor;
- (void)__updateElderlyPeopleAnswerStatus:(long long)a0 examId:(long long)a1;
- (void)dealloc;

@end
