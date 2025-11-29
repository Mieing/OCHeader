@class UIView, NSString, UIImageView, UIButton, AWEOriginalAdModel, NSObject, YYLabel, UILabel;
@protocol AWEFeedFeedbackEntranceProtocol, AWEAdSearchCardUIConfig, AWEAdOperationGuideStarView;

@interface AWEAdSearchCardView : UIView <AWEAdSearchCardView>

@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UILabel *headerLabel;
@property (retain, nonatomic) UIView *appInfoView;
@property (retain, nonatomic) UIView *descView;
@property (retain, nonatomic) UIImageView *appImageView;
@property (retain, nonatomic) YYLabel *appNameLabel;
@property (retain, nonatomic) YYLabel *appDescLabel;
@property (retain, nonatomic) UILabel *playCountLabel;
@property (retain, nonatomic) UIView<AWEAdOperationGuideStarView> *starView;
@property (retain, nonatomic) UIButton *downloadButton;
@property (retain, nonatomic) UILabel *downloadLabel;
@property (copy, nonatomic) NSString *label;
@property (retain, nonatomic) UIView *verticalLine;
@property (nonatomic) BOOL isStrongStyle;
@property (retain, nonatomic) NSObject<AWEAdSearchCardUIConfig> *uiConfig;
@property (nonatomic) BOOL isCardShowing;
@property (retain, nonatomic) UIView<AWEFeedFeedbackEntranceProtocol> *feedbackView;
@property (retain, nonatomic) AWEOriginalAdModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupAppInfoLayout;
- (id)initWithUIConfig:(id)a0;
- (void)configureHeaderView;
- (void)configureAppView;
- (void)onAppInfoViewTapped:(id)a0;
- (void)openAppWithRefer:(id)a0;
- (void)onAppDescViewTapped:(id)a0;
- (void)configWithModel:(id)a0 isStrongStyle:(BOOL)a1 extra:(id)a2;
- (id)createContentDescriptionStringFrom:(id)a0 rowsNum:(long long)a1;
- (void)layoutDescSubviews;
- (void)configWithModel:(id)a0 isStrongStyle:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (void)reset;

@end
