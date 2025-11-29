@class NSMutableDictionary, DUXPluralAvatar, UILabel, AWEProfilePostUnreadNoticeModel, AWEUserWorkCellContext;

@interface AWEProfilePostUnreadNoticeBottomView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) DUXPluralAvatar *pluralAvatar;
@property (retain, nonatomic) NSMutableDictionary *avatars;
@property (weak, nonatomic) AWEUserWorkCellContext *cellContext;
@property (retain, nonatomic) AWEProfilePostUnreadNoticeModel *noticeModel;

- (void)awe_themeDidChange:(long long)a0;
- (void)updateNoticeInfo;
- (long long)avatarsCount:(long long)a0;
- (id)avatarWithIndex:(long long)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupUI;

@end
