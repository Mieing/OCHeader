@class UIImage, NSString;

@interface WCFinderProfilePrivateViewModel : WCFinderStreamProfilePageModel

@property (retain, nonatomic) UIImage *errorIcon;
@property (retain, nonatomic) NSString *errorTips;

- (id)displayName;
- (BOOL)displayPrivateAccount;
- (BOOL)displayAccountBlocked;
- (id)viewPageClassName;
- (BOOL)shouldDisplayTab;
- (void).cxx_destruct;

@end
