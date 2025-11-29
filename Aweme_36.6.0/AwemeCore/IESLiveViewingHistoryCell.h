@class CAGradientLayer, UIImageView, CAShapeLayer, UILabel, UIView;
@protocol IESFeedLiveMarkViewProtocol;

@interface IESLiveViewingHistoryCell : UITableViewCell

@property (weak, nonatomic) UIImageView *avatarView;
@property (weak, nonatomic) UILabel *liveInfoLabel;
@property (weak, nonatomic) UILabel *nameLabel;
@property (weak, nonatomic) UILabel *descLabel;
@property (weak, nonatomic) UIView<IESFeedLiveMarkViewProtocol> *liveMarkView;
@property (retain, nonatomic) CAGradientLayer *markColorLayer;
@property (retain, nonatomic) CAShapeLayer *markClipLayerForAniamtion;

- (void)configureUI;
- (void)configHistory:(id)a0;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)awakeFromNib;
- (double)avatarWidth;

@end
