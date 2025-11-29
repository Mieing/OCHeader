@class MMUIImageView, NSString, MMFinderLiveGloryTopItemView, MMLiveTaskId, MMFinderLiveSharePubbleTipView, MMUILabel;
@protocol MMFinderLiveGloryTopViewDelegate;

@interface MMFinderLiveGloryTopView : MMUIView <MMFinderLiveGloryTopItemViewDelegate>

@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (retain, nonatomic) MMUIImageView *backgroundView;
@property (retain, nonatomic) MMUILabel *titleTipsView;
@property (retain, nonatomic) MMFinderLiveGloryTopItemView *top1UserView;
@property (retain, nonatomic) MMFinderLiveGloryTopItemView *top2UserView;
@property (retain, nonatomic) MMFinderLiveGloryTopItemView *top3UserView;
@property (retain, nonatomic) MMFinderLiveSharePubbleTipView *tipsPubbleView;
@property (weak, nonatomic) id<MMFinderLiveGloryTopViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 taskId:(id)a1 delegate:(id)a2;
- (void)setupSubviews;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)updateWithContacts:(id)a0;
- (id)liveTask;
- (BOOL)alwaysDark;
- (void)onTappedTopViewWithContact:(id)a0;
- (void)showTipsOn:(id)a0;
- (void)hidePubbleTipsView;
- (id)audienceLogReporter;
- (void).cxx_destruct;

@end
