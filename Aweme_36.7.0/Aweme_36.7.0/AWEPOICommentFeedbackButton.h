@class UIView, NSString, AWEPOICommentFeedbackProvider, AWEPOIFeedUgcItemModel, AWEPOICommentFeedbackConfig, AWEPOICommentScrollNumberView, UIImageView, AWEPOIDetailSkinConfig, LOTAnimationView, UILabel;
@protocol AWEPOICommentFeedbackButtonDelegate;

@interface AWEPOICommentFeedbackButton : UIView <AWEPOICommentFeedbackProtocol>

@property (weak, nonatomic) AWEPOICommentFeedbackProvider *provider;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } layoutSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) LOTAnimationView *animationView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEPOICommentScrollNumberView *rollCountView;
@property (retain, nonatomic) UILabel *countLabel;
@property (copy, nonatomic) id /* block */ block;
@property (nonatomic) unsigned long long buttonStatus;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) unsigned long long feedbackType;
@property (retain, nonatomic) AWEPOICommentFeedbackConfig *config;
@property (weak, nonatomic) AWEPOICommentFeedbackProvider *provider;
@property (nonatomic) long long diggedCount;
@property (retain, nonatomic) AWEPOIFeedUgcItemModel *model;
@property (retain, nonatomic) AWEPOIDetailSkinConfig *skinConfig;
@property (weak, nonatomic) id<AWEPOICommentFeedbackButtonDelegate> delegate;

- (void)updateSubviewsLayout;
- (void)feedbackAction;
- (double)countLabelWidth;
- (void)refreshDiggedCount;
- (void)flowButtonStatus;
- (id)lotAnimationName;
- (void)setFeedUGCItemModel:(id)a0;
- (id)initWithFeedbackType:(unsigned long long)a0 config:(id)a1 block:(id /* block */)a2;
- (void)cancelSelect;
- (void)updateSkinConfig:(id)a0;
- (void).cxx_destruct;
- (void)setProvider:(id)a0;
- (id)provider;
- (id)iconName;
- (id)title;
- (double)layoutWidth;
- (void)setup;
- (double)layoutHeight;

@end
