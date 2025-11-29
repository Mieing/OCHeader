@class IESLiveInteractSubtitleViewModel, NSArray, UIBezierPath, NSString, IESLiveInteractSubtitleConfig, UILabel, UIView;
@protocol IESLiveCompoundSubscription;

@interface IESLiveInteractSubtitleSingleUserView : UIView <IESLiveInteractSubtitleViewProtocol>

@property (copy, nonatomic) NSArray *users;
@property (weak, nonatomic) IESLiveInteractSubtitleViewModel *viewModel;
@property (weak, nonatomic) IESLiveInteractSubtitleConfig *config;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;
@property (copy, nonatomic) id /* block */ onclicked;
@property (retain, nonatomic) UIBezierPath *path;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIView *subtitleContainer;
@property (retain, nonatomic) UILabel *firstLine;
@property (retain, nonatomic) UILabel *secondLine;
@property (retain, nonatomic) UILabel *incomingLine;
@property (nonatomic) double animDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindViewModel;
- (void)updateViewModel:(id)a0;
- (void)updateUsers:(id)a0;
- (id)userIdToUserName:(id)a0;
- (void)scrollIfNeeded;
- (void)scrollAnimationWithCompletion:(id /* block */)a0;
- (id)getStandardLabel;
- (void)layoutStyleFrom;
- (void)drawMaskLayer;
- (void)excuteClickBlock;
- (void)layoutStyleTo;
- (void).cxx_destruct;
- (void)setClickEvent:(id /* block */)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithConfig:(id)a0;
- (void)dealloc;
- (void)updateAll;
- (void)setUpViews;
- (void)resize;

@end
