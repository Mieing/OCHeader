@class NSString, UIImageView, WCFinderAuthInfoIconView, UILabel, WCFinderCollectionDetailHeaderConfiguration;
@protocol UIContentConfiguration;

@interface WCFinderCollectionDetailHeaderView : UIView <UIContentView>

@property (retain, nonatomic) WCFinderCollectionDetailHeaderConfiguration *appliedConfiguration;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *authorLabel;
@property (retain, nonatomic) WCFinderAuthInfoIconView *authInfoIconView;
@property (retain, nonatomic) UILabel *feedCountLabel;
@property (retain, nonatomic) UILabel *updateAtLabel;
@property (copy, nonatomic) id<UIContentConfiguration> configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)cellHeightWithConfiguration:(id)a0 layoutEnvironment:(id)a1;

- (id)initWithConfiguration:(id)a0;
- (void)_setupUI;
- (void)_setupLayout;
- (void)_applyConfiguration:(id)a0;
- (void)_updateUI;
- (void)_didTapAuthName;
- (BOOL)_isTextOverCover;
- (void).cxx_destruct;

@end
