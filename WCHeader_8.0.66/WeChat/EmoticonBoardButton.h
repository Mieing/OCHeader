@class UIImage, MMBadgeView, UIImageView;

@interface EmoticonBoardButton : EmoticonViewWithPreview {
    MMBadgeView *m_badgeView;
    UIImageView *m_effectView;
}

@property (retain, nonatomic) UIImage *buttonImage;
@property (nonatomic) unsigned long long type;

- (void)initView;
- (void)showPreview;
- (void)showFocusView;
- (void)hideFocusView;
- (void)hidePreview;
- (void)configBadge;
- (void)updateDesc;
- (void)showNewYearEffect;
- (void)hideNewYearEffect;
- (id)accessibilityLabel;
- (void).cxx_destruct;

@end
