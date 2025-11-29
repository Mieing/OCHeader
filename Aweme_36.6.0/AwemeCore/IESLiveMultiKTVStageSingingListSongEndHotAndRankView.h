@class IESLiveMultiKTVStore, UIView, UIImageView, UIButton, CAGradientLayer, IESLiveMultiKTVStageSingingListSongEndHotAndRankItemView, IESLiveLinkMicAudienceGetKtvSingingHotResultResponse_ResponseData, UILabel;

@interface IESLiveMultiKTVStageSingingListSongEndHotAndRankView : UIView

@property (retain, nonatomic) UIView *bgContainer;
@property (retain, nonatomic) CAGradientLayer *borderGradientLayer;
@property (retain, nonatomic) IESLiveMultiKTVStore *store;
@property (retain, nonatomic) UIImageView *avatar;
@property (retain, nonatomic) UIButton *avatarBtn;
@property (retain, nonatomic) UILabel *singerNameLabel;
@property (retain, nonatomic) UILabel *songNameLabel;
@property (retain, nonatomic) UIButton *followButton;
@property (retain, nonatomic) UIImageView *hotIcon;
@property (retain, nonatomic) UIButton *hotIconBtn;
@property (retain, nonatomic) UIView *hotLabelContainer;
@property (retain, nonatomic) UIButton *hotLabelContainerBtn;
@property (retain, nonatomic) UILabel *hotLabel;
@property (retain, nonatomic) CAGradientLayer *hotLabelLayer;
@property (retain, nonatomic) UIImageView *peopleCountIcon;
@property (retain, nonatomic) UIButton *peopleCountIconBtn;
@property (retain, nonatomic) UILabel *peopleCountLabel;
@property (retain, nonatomic) UIButton *peopleCountLabelBtn;
@property (retain, nonatomic) CAGradientLayer *peopleCountLabelLayer;
@property (retain, nonatomic) IESLiveMultiKTVStageSingingListSongEndHotAndRankItemView *contributionItem;
@property (retain, nonatomic) UIButton *contributionItemBtn;
@property (retain, nonatomic) IESLiveMultiKTVStageSingingListSongEndHotAndRankItemView *dailyRankItem;
@property (retain, nonatomic) UIButton *dailyRankItemBtn;
@property (nonatomic) BOOL isFollowHidden;
@property (nonatomic) BOOL isFollowRequesting;
@property (nonatomic) long long realStartTime;
@property (copy, nonatomic) id /* block */ hotAction;
@property (copy, nonatomic) id /* block */ rankAction;
@property (copy, nonatomic) id /* block */ avatarAction;
@property (copy, nonatomic) id /* block */ followAction;
@property (retain, nonatomic) IESLiveLinkMicAudienceGetKtvSingingHotResultResponse_ResponseData *getKtvSingingHotResult;

- (void)updateFollowStatus:(BOOL)a0;
- (void)addGradientLayer;
- (void)didTapFollowBtn;
- (void)p_setupSubviews;
- (void)updateFollowBtnHidden:(BOOL)a0;
- (void)p_removeGradientLayer;
- (void)p_setupGradientLayer;
- (void)avatarDidTap;
- (void)hotAreaDidTap;
- (void)rankAreaDidTap;
- (id)addGradientLayerForLabel:(id)a0 container:(id)a1;
- (void).cxx_destruct;
- (void)updateData:(id)a0;
- (id)initWithStore:(id)a0;
- (void)layoutSubviews;
- (void)willShow;
- (void)updateWithStyle:(unsigned long long)a0;

@end
