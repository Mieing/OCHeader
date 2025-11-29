@class HTSEventContext, IESLiveGuideModel, IESLiveImageView, UILabel, NSString;
@protocol IESLiveVisibleScopePreferenceService;

@interface IESLiveGuideVisibleScopeView : UIView <IESLiveFastVisibleScopeSettingService, IESLiveGuidePaidVisibleEvent>

@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) IESLiveImageView *arrow;
@property (retain, nonatomic) id<IESLiveVisibleScopePreferenceService> visibleService;
@property (nonatomic) BOOL hasPaidLive;
@property (nonatomic) unsigned long long liveType;
@property (nonatomic) BOOL fastTryLiveSettingSuccess;
@property (retain, nonatomic) IESLiveGuideModel *guideModel;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)changeGuidePaidLiveStatus:(BOOL)a0;
- (void)changePaidVisibleRange:(long long)a0;
- (void)setTryLiveVisibleScope;
- (void)updateVisibleTextWithTitle:(id)a0;
- (void)handleLiveTypeChange:(unsigned long long)a0;
- (void)handleOpenLiveModelDidUpdate:(id)a0;
- (unsigned long long)typeFromResponseType:(int)a0;
- (void)updateHintText;
- (void)showVisibleScope;
- (void)sendSubscibeLiveSatusChangeAction:(unsigned long long)a0;
- (id)newTitleOfType:(unsigned long long)a0;
- (void)appendAudienceCntLimitTextSuffixIfNeeded;
- (unsigned long long)updatePaidLiveVisibilityRange:(long long)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;

@end
