@class NSArray, UIImageView, NSString, UILabel, UIButton;

@interface IESLivePadCastLoginView : UIView

@property (nonatomic) long long cancelButtonTimeLeft;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *nickNameLabel;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (nonatomic) BOOL isCancel;
@property (retain, nonatomic) NSArray *avatarImageURLs;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (copy, nonatomic) id /* block */ confirmBlock;

- (void)updateCancelButtonTitle;
- (void)cutDownCancelButtonTimeLeft;
- (void).cxx_destruct;
- (void)cancelAction;
- (id)init;
- (void)setupUI;

@end
