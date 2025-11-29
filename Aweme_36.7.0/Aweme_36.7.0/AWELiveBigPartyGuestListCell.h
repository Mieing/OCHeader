@class RACCompoundDisposable, IESLiveMultiInteractUser, UIImageView, UILabel, AWELiveWebPPlayer;
@protocol IESLiveSettings;

@interface AWELiveBigPartyGuestListCell : UICollectionViewCell

@property (retain, nonatomic) IESLiveMultiInteractUser *model;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIImageView *mediaCoverView;
@property (retain, nonatomic) UIImageView *talkingView;
@property (retain, nonatomic) AWELiveWebPPlayer *talkingAnimationView;
@property (retain, nonatomic) id<IESLiveSettings> settings;
@property (retain, nonatomic) RACCompoundDisposable *disposable;

- (void)resetDisposableIfNeeded;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)updateWithModel:(id)a0;
- (void)clean;
- (void)layoutUI;

@end
