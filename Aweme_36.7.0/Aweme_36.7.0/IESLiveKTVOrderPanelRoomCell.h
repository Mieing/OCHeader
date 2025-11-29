@class UIImageView, PersonalKaraokeKtvLiveRoomRecommendResponse_RecommendItem, UILabel, UIView;
@protocol IESLiveWebPPlayer;

@interface IESLiveKTVOrderPanelRoomCell : UICollectionViewCell

@property (retain, nonatomic) UIView *avatarContainer;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UILabel *songLabel;
@property (retain, nonatomic) UILabel *onLineLabel;
@property (retain, nonatomic) PersonalKaraokeKtvLiveRoomRecommendResponse_RecommendItem *model;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *avatarLiveIcon;
@property (nonatomic) long long index;

- (void)didClickAvatar;
- (void)resetCell;
- (void)renderWithModel:(id)a0 index:(long long)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupActions;
- (void)setupUI;

@end
