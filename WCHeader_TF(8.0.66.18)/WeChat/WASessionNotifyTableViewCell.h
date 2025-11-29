@class UIView, NSString, UILabel, MMWebImageView, UIButton;
@protocol WASessionNotifyTableViewCellDelegate;

@interface WASessionNotifyTableViewCell : MMTableViewCell {
    NSString *_userName;
    NSString *_nickName;
    NSString *_headImageURL;
    MMWebImageView *_headImageView;
    UILabel *_titleLabel;
    UIButton *_openButton;
    UIView *_sepreateLine;
}

@property (weak, nonatomic) id<WASessionNotifyTableViewCellDelegate> cellViewDelegate;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateDataWithDelegate:(id)a0 userName:(id)a1 nickName:(id)a2 headImageURL:(id)a3 isShowSeperateLine:(BOOL)a4;
- (id)getUserName;
- (id)getNickName;
- (void)initView;
- (void)initHeadImgeView;
- (void)initTitleLabel;
- (void)initOpenButton;
- (void)initSeperateLine;
- (void)layoutSubviews;
- (void)updateData;
- (void)onClickOpenButton:(id)a0;
- (void).cxx_destruct;

@end
