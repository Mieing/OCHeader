@class UIImageView, NSString;

@interface IESIMAICloneAvatarView : UIView <IESIMAICloneAvatarViewProtocol>

@property (nonatomic) double avatarHeight;
@property (nonatomic) double tagHeight;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIImageView *tagImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancelLoadAvatar;
- (void)configAvatarWithURLArray:(id)a0;
- (id)initWithAvatarHeight:(double)a0 tagHeight:(double)a1;
- (void)p_addViews;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
