@class UIView, NSString, IESLiveStreamPlayerModel, UIImageView, UIButton, IESLiveInnerFeedLiveGuideCardSkylightView, CAGradientLayer, IESLiveInnerFeedLiveGuideCardItemModel, UILabel;
@protocol IESLiveInnerFeedLiveGuideCardService, IESLivePlayerProtocol;

@interface IESLiveInnerFeedLiveGuideCardCell : UICollectionViewCell <IESLivePlayerControllerDelegate, IESLiveInnerFeedCellProtocol>

@property (nonatomic) BOOL isMounted;
@property (retain, nonatomic) IESLiveStreamPlayerModel *streamModel;
@property (retain, nonatomic) IESLiveInnerFeedLiveGuideCardItemModel *itemModel;
@property (weak, nonatomic) id<IESLiveInnerFeedLiveGuideCardService> guideCardService;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UILabel *secondTitle;
@property (retain, nonatomic) UILabel *firstTitle;
@property (retain, nonatomic) UIView *playerContainer;
@property (retain, nonatomic) id<IESLivePlayerProtocol> player;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) IESLiveInnerFeedLiveGuideCardSkylightView *skylightView;
@property (retain, nonatomic) UIButton *dislikeButton;
@property (retain, nonatomic) UIButton *jumpButton;
@property (retain, nonatomic) UIImageView *guideView;
@property (retain, nonatomic) UILabel *guideLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)player:(id)a0 loadStateDidChange:(unsigned long long)a1;
- (void)jumpAction;
- (void)updateWithItemModel:(id)a0;
- (void)didEndDisplayCell;
- (void)dislikeAction;
- (void)prePlay;
- (void)mountCell;
- (void)unMountCell:(long long)a0;
- (void)loadBackgroundView;
- (void)playerAction;
- (void)updatePlayerModel;
- (void)updateViewAfterConfigModel;
- (void)trackLiveGuideShow;
- (void)trackHideLast;
- (id)guideFeedItems;
- (id)visibleAnchorIds;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)setupViews;
- (void)willDisplayCell;

@end
