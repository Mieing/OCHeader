@class UIImageView;

@interface AppHardWareNotifyMessageCellView : BaseMessageCellView {
    UIImageView *m_bgImageView;
    UIImageView *m_arrowImageView;
}

- (id)getBackgroundImage;
- (id)getBackgroundImageHL;
- (void)layoutContentView;
- (void)setHighlighted:(BOOL)a0;
- (void)onTouchUpInside;
- (void).cxx_destruct;

@end
