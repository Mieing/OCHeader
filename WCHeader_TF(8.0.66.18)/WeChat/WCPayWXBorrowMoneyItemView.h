@class UILabel, WCPayWXBorrowMoneyItem, MMWebImageView;

@interface WCPayWXBorrowMoneyItemView : MMUIButton {
    WCPayWXBorrowMoneyItem *m_info;
    MMWebImageView *m_logoView;
    MMWebImageView *m_waterMaskView;
    UILabel *m_bankNameLabel;
    UILabel *m_bankTypeLabel;
    UILabel *m_entranceLabel;
}

- (id)initWithWXBorrowMoneyItem:(id)a0;
- (id)getInfo;
- (void)initView;
- (void).cxx_destruct;

@end
