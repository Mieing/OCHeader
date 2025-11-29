@class UIImageView, UILabel, UIView;

@interface MMNearByHeaderView : UIControl {
    UIImageView *m_iconView;
    UILabel *m_title;
    UIView *m_lineView;
}

- (void)dealloc;
- (id)init;
- (void)updateConstraints;
- (void).cxx_destruct;

@end
