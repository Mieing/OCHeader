@class NSArray, MMTimer, UIImageView, UILabel, UIView;

@interface WCLanDeviceSearchingDefaultView : UIView {
    UILabel *m_searchLbl;
    NSArray *m_tailStrs;
    unsigned long long m_tailIndex;
    MMTimer *m_tailTimer;
    UIView *m_containerView;
    UIImageView *m_searchingLogo;
}

- (id)init;
- (void)textModifyMethod;
- (void)dealloc;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
