@class CAGradientLayer, NSString, UIImageView, UIView, IESLiveGradientView, UILabel;
@protocol IESLiveRoomService, IESLiveWebPPlayer;

@interface IESLiveNewFinishAudienceRecommendCell : IESLiveNewFinishAudienceRecommendBaseCell <IESLivePlayerControllerDelegate, IESLiveNewFinishAudienceRecommendCellProtocol>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *bgImgaeView;
@property (retain, nonatomic) UIImageView *platformTagView;
@property (retain, nonatomic) UIView *contentContainerView;
@property (retain, nonatomic) IESLiveGradientView *informationContainerView;
@property (retain, nonatomic) UIImageView *dynamicTagView;
@property (retain, nonatomic) UIView *anchorInformationView;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *watchCountLabel;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *coverDynamicMask;
@property (nonatomic) BOOL isFinish;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)enableShowChallenge;
- (void)player:(id)a0 loadStateDidChange:(unsigned long long)a1;
- (void)player:(id)a0 didReceiveMetaInfo:(id)a1 processed:(BOOL)a2;
- (BOOL)canPreview;
- (void)p_renderUI;
- (void)startPreviewWithPlayer:(id)a0;
- (id)coverURLList:(id)a0;
- (id)watchingCountStr;
- (BOOL)watchCountLabelHidden;
- (void)finishedChange:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateWithModel:(id)a0;

@end
