@class ACCAnimatedButton, UIView;
@protocol AWECoverEditImageChooseCoverService;

@interface AWECoverEditImageBottomComponent : ACCSecondaryPageComponent

@property (retain, nonatomic) UIView *bottomView;
@property (retain, nonatomic) ACCAnimatedButton *selectButton;
@property (nonatomic) BOOL isSaving;
@property (weak, nonatomic) id<AWECoverEditImageChooseCoverService> chooseCoverService;

- (void)componentDidMount;
- (double)subViewHeight;
- (id)subViewInHierarchy;
- (unsigned long long)secondaryPageComponentType;
- (void)trackSetCoverEvent;
- (void)selectButtonDidClick;
- (void).cxx_destruct;

@end
