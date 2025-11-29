@class AWEPublishToNearbyPrivacyOptionView, NSString;

@interface AWEPublishToNearbyPrivacySelectionView : UIView <AWEPublishToNearbyPrivacySelectionViewProtocol>

@property (retain, nonatomic) AWEPublishToNearbyPrivacyOptionView *preferPublishToNearbyView;
@property (retain, nonatomic) AWEPublishToNearbyPrivacyOptionView *allowPublishToNearbyView;
@property (retain, nonatomic) AWEPublishToNearbyPrivacyOptionView *forbiddenPublishToNearbyView;
@property (nonatomic) BOOL enableNearbyVisible;
@property (nonatomic) BOOL isPrivateAccount;
@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL isPubicVideo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)__buildUI;
- (void)__layoutUI;
- (id)__privacyOptionViewWithType:(unsigned long long)a0;
- (void)__updateButtonUnSelectedStateWithType:(unsigned long long)a0;
- (void)__updateButtonSelectedStateWithType:(unsigned long long)a0;
- (BOOL)__shouldShowToast;
- (void)__showToast;
- (void)__tryShowPreferTips;
- (void)__trackClickPublishToNearbySelectionWithFrom:(unsigned long long)a0 to:(unsigned long long)a1;
- (void)__updateDefaultTypeWithType:(unsigned long long)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })viewSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)willMoveToWindow:(id)a0;

@end
