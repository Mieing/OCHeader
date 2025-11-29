@class AWEFeedDetailCardCellAuthorInfoViewLayout, NSString, UIImageView, DUXButton, UILabel, AWEAwemeModel, AWEUserModel;

@interface AWERVNewDetailAuthorInfoView : UIView <AWERVNewDetailAuthorInfoViewProtocol>

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *nickNameLabel;
@property (retain, nonatomic) DUXButton *followButton;
@property (retain, nonatomic) UILabel *timeStampLabel;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEUserModel *user;
@property (nonatomic) long long sizeStyle;
@property (retain, nonatomic) AWEFeedDetailCardCellAuthorInfoViewLayout *layoutConfig;
@property (copy, nonatomic) id /* block */ followBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)followButtonAction;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 sizeStyle:(long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 sizeStyle:(long long)a1 layoutConfig:(id)a2;
- (void)updateFollowBtnWithUser:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithModel:(id)a0;
- (void)configureConstraints;
- (void)configureSubviews;

@end
