@class UIView, MMWebImageView, NSString, UIImage, NSURL, ShareOpenSDKStateItem, WCLanDeviceStateItemProgressView, UILabel;

@interface ShareActionSheetCell : MMScrollActionSheetItemView {
    UIView *m_contentView;
    UIView *m_header;
    MMWebImageView *m_imageView;
    UILabel *m_titleLabel;
    UILabel *m_subTitleLabel;
    UIView *m_stateView;
    WCLanDeviceStateItemProgressView *m_progressView;
    UILabel *m_resultLabel;
    UIView *m_resultBgView;
}

@property (nonatomic) long long m_index;
@property (copy, nonatomic) NSString *m_title;
@property (retain, nonatomic) UIImage *m_iconImg;
@property (retain, nonatomic) NSURL *m_iconImgUrl;
@property (retain, nonatomic) id m_userInfo;
@property (retain, nonatomic) ShareOpenSDKStateItem *m_stateItem;

- (id)init;
- (double)lineHeight;
- (void).cxx_destruct;

@end
