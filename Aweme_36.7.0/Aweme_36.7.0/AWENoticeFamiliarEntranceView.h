@class UIImageView;

@interface AWENoticeFamiliarEntranceView : UIView <AWENoticeFamiliarEntranceViewProtocol>

@property (retain, nonatomic) UIImageView *iconImageView;

- (void)trackNoticeFamiliarEntranceWithActionType:(id)a0;
- (void)updateNoticeEntranceShadowWithDarkTheme;
- (void)setupEntranceView;
- (void)onEntranceViewClicked:(id)a0;
- (void)changeEntranceViewUnreadDotVisibility:(BOOL)a0;
- (void)trackEnterInteractionNoticeFromFamiliar;
- (void).cxx_destruct;
- (id)init;

@end
