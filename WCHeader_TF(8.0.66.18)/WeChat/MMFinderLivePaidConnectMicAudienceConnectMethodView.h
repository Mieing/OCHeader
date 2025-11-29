@class NSString, UIImageView, UIView, MMUILabel;

@interface MMFinderLivePaidConnectMicAudienceConnectMethodView : UIView

@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIImageView *checkMarkImageView;
@property (retain, nonatomic) UIView *lineView;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL showSepLine;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *iconName;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) id /* block */ tapCallback;

- (id)init;
- (void)initUI;
- (void)didTap;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)refreshUI;
- (void).cxx_destruct;

@end
