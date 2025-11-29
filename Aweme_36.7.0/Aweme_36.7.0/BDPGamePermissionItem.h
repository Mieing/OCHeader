@class NSString, NSDictionary, NSAttributedString, BDPGameUserScopePopupConfig;

@interface BDPGamePermissionItem : NSObject

@property (nonatomic) BOOL on;
@property (nonatomic) double cellHeight;
@property (nonatomic) long long itemType;
@property (nonatomic) long long buttonType;
@property (nonatomic) long long infoType;
@property (nonatomic) BOOL isOAuth;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *scope;
@property (copy, nonatomic) NSAttributedString *detailDescription;
@property (copy, nonatomic) NSDictionary *config;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *buttonJumpSchema;
@property (nonatomic) BOOL clickNeedPopup;
@property (retain, nonatomic) BDPGameUserScopePopupConfig *popupConfig;

- (void).cxx_destruct;

@end
