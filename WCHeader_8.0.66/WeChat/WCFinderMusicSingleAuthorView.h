@class UIImageView, WCFinderHeadImageView, UILabel, UIView;
@protocol WCFinderMusicSingleAuthorViewDelegate;

@interface WCFinderMusicSingleAuthorView : UIView

@property (retain, nonatomic) WCFinderHeadImageView *avatarImageView;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIView *topSeparateLine;
@property (retain, nonatomic) UIView *bottomSeparateLine;
@property (weak, nonatomic) id<WCFinderMusicSingleAuthorViewDelegate> delegate;
@property (nonatomic) int commentScene;

+ (id)buildFriendDescLabel:(double)a0;
+ (id)getFriendDataStringByFriendData:(id)a0;
+ (double)heightOfSingleAuthorView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateAuthorViewWithSignerInfo:(id)a0 isLastFinderContact:(BOOL)a1;
- (void)layoutAllSubviewsByIsLastFinderContact:(BOOL)a0;
- (void)onClickTagAuthorView;
- (void).cxx_destruct;

@end
