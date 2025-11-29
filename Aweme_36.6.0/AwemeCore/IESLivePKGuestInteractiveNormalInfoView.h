@class UIImageView, UILabel, UIView, IESLivePKGuestInteractiveInvitorView;

@interface IESLivePKGuestInteractiveNormalInfoView : UIView

@property (retain, nonatomic) UIImageView *locationIconView;
@property (retain, nonatomic) UILabel *applyTimeLabel;
@property (retain, nonatomic) UILabel *locationLabel;
@property (retain, nonatomic) UIView *infoSeperatorLineView;
@property (retain, nonatomic) IESLivePKGuestInteractiveInvitorView *invitorView;

- (void)updateWithModel:(id)a0 now:(id)a1 sortByTime:(BOOL)a2;
- (id)waitingDesStringWithModel:(id)a0 now:(id)a1;
- (void)setupConstraints;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)init;
- (void)setupViews;

@end
