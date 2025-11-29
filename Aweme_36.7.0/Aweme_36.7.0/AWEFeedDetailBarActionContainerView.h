@class NSString, AWEFeedDetailBarVideoShrinkView, AWEFeedDetailBarForwardView, AWEFeedDetailBarActionBaseView, AWEFeedDetailBarSchoolStoryShootView;
@protocol AWEFeedDetailBarActionContainerViewDelegate;

@interface AWEFeedDetailBarActionContainerView : UIView

@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) AWEFeedDetailBarVideoShrinkView *shrinkView;
@property (retain, nonatomic) AWEFeedDetailBarSchoolStoryShootView *schoolStoryView;
@property (retain, nonatomic) AWEFeedDetailBarForwardView *forwardView;
@property (retain, nonatomic) AWEFeedDetailBarActionBaseView *contentView;
@property (weak, nonatomic) id<AWEFeedDetailBarActionContainerViewDelegate> delegate;
@property (nonatomic) double containerWidth;
@property (nonatomic) double containerHeight;

- (void)configureUI;
- (void)updateAwemeModel:(id)a0;
- (id)initWithEnterFrom:(id)a0 referString:(id)a1;
- (BOOL)isEnableShowSchoolStoryButton;
- (BOOL)isEnableShowForwardButton;
- (void)updateForwardButtonConstraint;
- (BOOL)isEnableShowShrinkButton;
- (void)configShrinkButton;
- (void)configSchoolStoryButton;
- (void)configForwardButton;
- (void)shrinkBtnClick;
- (void).cxx_destruct;

@end
