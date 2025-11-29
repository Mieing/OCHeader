@class NSString, UIImageView, NSDictionary, UILabel, UIView, UIButton;
@protocol AWEIMNewGroupInviteCardEntryLimitsTableViewCellProtocol;

@interface AWEIMNewGroupInviteCardEntryLimitsTableViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *taskLabel;
@property (retain, nonatomic) UIView *separator;
@property (copy, nonatomic) NSString *jumpSchemeUrl;
@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) UIImageView *statusIcon;
@property (retain, nonatomic) UIButton *followBtn;
@property (nonatomic) unsigned long long buttonType;
@property (copy, nonatomic) NSDictionary *templateExtra;
@property (weak, nonatomic) id<AWEIMNewGroupInviteCardEntryLimitsTableViewCellProtocol> delegate;

+ (id)identifier;

- (void)__setupUI;
- (void)__followBtnClicked;
- (void)__updateWithStatus:(BOOL)a0;
- (void)__updateWithEntryExt:(id)a0;
- (void)__updateCustomEntryWithEntryLimit:(id)a0;
- (void)__updateFollowWithEntryExt:(id)a0;
- (void)__updateMemberWithEntryExt:(id)a0;
- (void)__updateCharityDonations;
- (void)__changeFollowButtonWithStatus:(long long)a0;
- (void)__changeJoinMemberButtonWithStatus:(BOOL)a0;
- (void)__transferToSchemaWithDismiss:(BOOL)a0;
- (void)__changeButtonWithTitle:(id)a0 enable:(BOOL)a1;
- (BOOL)__isTaskLabelSingleLine:(double)a0;
- (void)renderWithEntryLimit:(id)a0;
- (void)updateWithNeedSeparator:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;

@end
