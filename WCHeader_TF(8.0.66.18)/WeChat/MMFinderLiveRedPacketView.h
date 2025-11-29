@class MMFinderLiveRedPacketViewModel, NSString, PAGView, PAGFile, UILabel, UIView, UIButton;

@interface MMFinderLiveRedPacketView : UIView <MMFinderLiveRedPacketViewModelObserver, PAGViewListener>

@property (nonatomic) unsigned long long redPacketCount;
@property (retain, nonatomic) PAGView *redPacketAnimationView;
@property (retain, nonatomic) UILabel *remainingTimeLabel;
@property (retain, nonatomic) UILabel *countLabel;
@property (retain, nonatomic) UIButton *openButton;
@property (readonly, nonatomic) PAGFile *appearingPAGFile;
@property (readonly, nonatomic) PAGFile *multiplePAGFile;
@property (readonly, nonatomic) PAGFile *oneRepeatPAGFile;
@property (readonly, nonatomic) PAGFile *multipleRepeatPAGFile;
@property (retain, nonatomic) UILabel *staticDescLabel;
@property (retain, nonatomic) UIView *staticBGView;
@property (nonatomic) BOOL isStaticStyle;
@property (nonatomic) struct CGSize { double width; double height; } redPacketSize;
@property (retain, nonatomic) MMFinderLiveRedPacketViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)dealloc;
- (void)initRedPacketAnimationView;
- (BOOL)redPacketAnimationRepeatEnabled;
- (void)initRemainingTimeLabel;
- (void)initCountLabel;
- (void)initOpenButton;
- (void)openButtonClicked:(id)a0;
- (void)initStaticViews;
- (id)pathForOneRepeatPAGFile;
- (id)pathForMultipleRepeatPAGFile;
- (void)resetRedPacketSize;
- (void)updateRedPacketSize:(struct CGSize { double x0; double x1; })a0;
- (void)animateToNormalStyle;
- (void)animateToStaticStyleWithCompletion:(id /* block */)a0;
- (void)playAnimationView;
- (double)startProgressForPacketPAG;
- (void)refreshWithRemainingTimeHidden:(BOOL)a0;
- (void)refreshWithRemainingTimeString:(id)a0;
- (void)refreshWithCount:(unsigned long long)a0;
- (void)refreshCountLabelWithCountString:(id)a0 animated:(BOOL)a1;
- (void)refreshWithHidden:(BOOL)a0;
- (void)redPacketViewModel:(id)a0 remainingTimeStringDidChange:(id)a1;
- (void)redPacketViewModel:(id)a0 countDidChange:(unsigned long long)a1;
- (void)redPacketViewModel:(id)a0 hiddenDidChange:(BOOL)a1;
- (void)onAnimationEnd:(id)a0;
- (void)onAnimationCancel:(id)a0;
- (void).cxx_destruct;

@end
