@class UIImageView, UILabel;

@interface IESLiveInteractSwitchCustomItem : IESLiveButton

@property (retain, nonatomic) UIImageView *iconImageView;
@property (nonatomic) BOOL isAudioLive;
@property (retain, nonatomic) UILabel *bottomTitleLbl;

- (id)initWithDIContext:(id)a0 isAudioLive:(BOOL)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)loadViews;

@end
