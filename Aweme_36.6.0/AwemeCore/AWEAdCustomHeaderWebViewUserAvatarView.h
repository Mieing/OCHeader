@class UIImageView, NSString, AWEAwemeModel;

@interface AWEAdCustomHeaderWebViewUserAvatarView : UIView

@property (retain, nonatomic) UIImageView *avatar;
@property (retain, nonatomic) UIImageView *verifyUser;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) NSString *barType;
@property (nonatomic) struct CGSize { double width; double height; } size;

- (void)updateContentViewWithModel:(id)a0;
- (id)initWithModel:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void).cxx_destruct;
- (void)avatarTapped:(id)a0;

@end
