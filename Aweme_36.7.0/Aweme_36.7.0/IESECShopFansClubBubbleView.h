@class UIImageView, UILabel, UIView;
@protocol IESECShopFansClubBubbleViewDelegate;

@interface IESECShopFansClubBubbleView : IESECShopMonitorActionView

@property (retain, nonatomic) UIImageView *fansClubBubbleArrowImageView;
@property (retain, nonatomic) UIView *fansClubBubbleBackgroundView;
@property (retain, nonatomic) UILabel *fansClubPromptLabel;
@property (retain, nonatomic) UILabel *fansClubJumpLabel;
@property (retain, nonatomic) UIView *fansClubSeperator;
@property (retain, nonatomic) UIImageView *fansClubArrowImageView;
@property (weak, nonatomic) id<IESECShopFansClubBubbleViewDelegate> delegate;

- (void)updateBubbleWithConfig:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupViews;
- (void)tapAction;

@end
