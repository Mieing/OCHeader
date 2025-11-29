@class NSString, UIImageView, UILabel, UIButton;
@protocol IESLiveBigPartyAudienceApplyViewDelegate;

@interface IESLiveBigPartyAudienceApplyView : UIView <IESLiveInteractiveViewAboveListView>

@property (retain, nonatomic) UIButton *containerView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *textLabel;
@property (nonatomic) double scale;
@property (nonatomic) long long style;
@property (weak, nonatomic) id<IESLiveBigPartyAudienceApplyViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)roundStyle;
- (void)addCornerRadius;
- (void)didClickApplyView;
- (void)updatePaidLinkMicText:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1;
- (void)layoutSubviews;
- (void)setupViews;

@end
