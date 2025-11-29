@class UIImageView, UILabel;

@interface IESLiveKTVChorusRankListItem : UIView

@property (retain, nonatomic) UIImageView *headIV;
@property (retain, nonatomic) UIImageView *firstIV;
@property (retain, nonatomic) UIImageView *secondIV;
@property (retain, nonatomic) UIImageView *thirdIV;
@property (retain, nonatomic) UILabel *scoreLabel;

- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)updateUser:(id)a0;

@end
