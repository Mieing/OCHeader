@class IESECURLModel, UIImageView, NSString, UILabel, UIButton;
@protocol IESECWinSecondaryAuthorInfoViewDelegate;

@interface IESECWinSecondaryAuthorInfoView : UIView {
    IESECURLModel *_authorURL;
    NSString *_name;
}

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIButton *goWindowBtn;
@property (weak, nonatomic) id<IESECWinSecondaryAuthorInfoViewDelegate> delegate;

- (void)goWindowAction;
- (id)initWithAuthor:(id)a0 name:(id)a1;
- (void)isFromInnerWindow:(BOOL)a0;
- (void).cxx_destruct;
- (void)setupUI;

@end
