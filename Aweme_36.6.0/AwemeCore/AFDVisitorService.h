@class NSString, AFDFrequencyCountRule;

@interface AFDVisitorService : HTSService <AFDVisitorService>

@property (retain, nonatomic) AFDFrequencyCountRule *offlineExitRule;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)enableOtherProfileAddVisitorBtn;
- (BOOL)profileVisitorEntranceOffline;
- (id)offlineTextModel;
- (BOOL)isHitProfileVisitorEntranceOfflineEvent;
- (void)reportProfileVisitorOfflineEvent;
- (id)v2TitleTextWithEnterFrom:(id)a0 shouldShowCount:(BOOL)a1 count:(long long)a2;
- (void).cxx_destruct;

@end
