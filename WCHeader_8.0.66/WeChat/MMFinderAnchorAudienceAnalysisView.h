@class UIView, NSString, UITapGestureRecognizer, NSArray, MMFinderLiveTask, UIImageView, RichTextView, UILabel;
@protocol MMFinderAnchorAudienceAnalysisViewDelegate;

@interface MMFinderAnchorAudienceAnalysisView : UIView

@property (retain, nonatomic) MMFinderLiveTask *liveTask;
@property (nonatomic) unsigned long long currentThankGuideIndex;
@property (retain, nonatomic) UIView *contentContainer;
@property (retain, nonatomic) UIView *avatarContainer;
@property (retain, nonatomic) RichTextView *showWordingLabel;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) UILabel *jumpTextLabel;
@property (retain, nonatomic) NSString *showWording;
@property (retain, nonatomic) NSString *jumpTextWording;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIImageView *rightChevronView;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (weak, nonatomic) id<MMFinderAnchorAudienceAnalysisViewDelegate> delegate;
@property (retain, nonatomic) NSArray *thankGuideList;
@property (nonatomic) unsigned int waitTime;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 liveTask:(id)a1;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setupThankGuideUI;
- (double)_avatarContentWidth;
- (double)_textWidthForString:(id)a0 font:(id)a1;
- (void)layoutThankGuideView;
- (void)startThankGuideRotation;
- (void)rotateThankGuide;
- (void)updateThankGuideDisplay;
- (void)onTapped;
- (void)dealloc;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void).cxx_destruct;

@end
