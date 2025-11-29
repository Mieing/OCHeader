@class NSString, UIImageView, WCFinderFavoriteCollectionFlowConfiguration, UILabel, WCFinderAuthInfoIconView, UILongPressGestureRecognizer;
@protocol UIContentConfiguration;

@interface WCFinderFavoriteCollectionFlowConfigurationView : UIView <UIContentView>

@property (retain, nonatomic) WCFinderFavoriteCollectionFlowConfiguration *appliedConfiguration;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) WCFinderAuthInfoIconView *authInfoView;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGesture;
@property (copy, nonatomic) id<UIContentConfiguration> configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightWithConfiguration:(id)a0 proposeSize:(struct CGSize { double x0; double x1; })a1;

- (id)initWithConfiguration:(id)a0;
- (void)_applyConfiguration:(id)a0;
- (void)_setupUI;
- (void)_updateUI;
- (void)_updateLayout;
- (void)layoutSubviews;
- (void)longPressGestureEventHanlder:(id)a0;
- (void)onDelete;
- (void).cxx_destruct;

@end
