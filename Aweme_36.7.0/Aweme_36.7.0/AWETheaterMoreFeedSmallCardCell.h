@class AWEFeedInsetsLabel, NSString, AWEMVDislikeRevokableView, AWETheaterMoreFeedSectionItem, AWEGradientView, NSDictionary, BDImageView, UIButton, AWETheaterPageContext, UILabel;

@interface AWETheaterMoreFeedSmallCardCell : UICollectionViewCell <AWEMVPreloaderProtocol>

@property (retain, nonatomic) AWETheaterMoreFeedSectionItem *sectionItem;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (retain, nonatomic) AWEMVDislikeRevokableView *dislikeRevokableView;
@property (retain, nonatomic) BDImageView *coverImageView;
@property (retain, nonatomic) AWEFeedInsetsLabel *tagLabel;
@property (retain, nonatomic) AWEGradientView *gradientView;
@property (retain, nonatomic) UILabel *updateInfoLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *videoTagInfoLabel;
@property (retain, nonatomic) UIButton *moreButton;
@property (retain, nonatomic) AWETheaterPageContext *context;
@property (copy, nonatomic) id /* block */ longPressedBlock;
@property (copy, nonatomic) id /* block */ revokeFeedbackBlock;
@property (copy, nonatomic) NSDictionary *feedbackInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logScenePrefix;

- (void)showFeedbackMask;
- (void)dismissFeedbackMask;
- (void)updateCoverImage:(id)a0;
- (void)configWithSectionItem:(id)a0 context:(id)a1 logExtraDict:(id)a2;
- (void)updateCoverTag:(id)a0;
- (void)gotoTheaterDetailPage;
- (void)gotoLongVideoDetailPage;
- (void)addFeedbackViews;
- (void)moreButtonPressed:(id)a0 forEvent:(id)a1;
- (void)revokeButtonPressed:(id)a0;
- (id)awemv_preloadVideoModel;
- (void)handleResponseClicked;
- (void)longPressedGestureRecognized:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;

@end
