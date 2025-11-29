@class MMFinderLivePkTaskedBonusModel, MMLiveDisplayLinkAnimator, UIColor, NSString, UILabel, MMFinderLivePkTaskedBonusBarBriefingContentMaskingView, UIView;

@interface MMFinderLivePkTaskedBonusBarBriefingContentView : UIView <MMFinderLivePkTaskedBonusBarContentView>

@property (retain, nonatomic) UIView *contentContainer;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) MMFinderLivePkTaskedBonusBarBriefingContentMaskingView *maskingView;
@property (retain, nonatomic) MMLiveDisplayLinkAnimator *animator;
@property (nonatomic) double currentProgress;
@property (retain, nonatomic) MMFinderLivePkTaskedBonusModel *model;
@property (readonly, nonatomic) UIColor *contentShadowColor;
@property (readonly, nonatomic) NSString *currentPreferredGiftId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)updateWithModel:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void)startScrolling;
- (void)stopScrolling;
- (void)updateContentTransformWithProgress:(double)a0;
- (void).cxx_destruct;

@end
