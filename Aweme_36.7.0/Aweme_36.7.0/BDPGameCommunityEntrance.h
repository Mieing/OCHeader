@class UIImage, UIImageView;
@protocol BDPGameCommunityEntranceDelegate;

@interface BDPGameCommunityEntrance : UIButton

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (weak, nonatomic) id<BDPGameCommunityEntranceDelegate> delegate;
@property (nonatomic) long long theme;

- (void)onClickButton:(id)a0;
- (id)initWithTheme:(long long)a0 image:(id)a1 delegate:(id)a2;
- (void).cxx_destruct;
- (void)setupUI;

@end
