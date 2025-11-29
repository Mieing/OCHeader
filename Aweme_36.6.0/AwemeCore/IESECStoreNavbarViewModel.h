@class UIColor, IESECShopTopSearchInfoModel, NSString, IESECShopActivityResponse, IESECShopInfoResponse;

@interface IESECStoreNavbarViewModel : NSObject

@property (retain, nonatomic) IESECShopInfoResponse *infoResponse;
@property (retain, nonatomic) IESECShopActivityResponse *activityResponse;
@property (retain, nonatomic) IESECShopTopSearchInfoModel *topSearchInfo;
@property (readonly, nonatomic) BOOL showSearchButton;
@property (readonly, nonatomic) BOOL useLocalGradientBorder;
@property (readonly, copy, nonatomic) NSString *searchHint;
@property (readonly, copy, nonatomic) NSString *serviceURL;
@property (readonly, copy, nonatomic) NSString *shoppingCartURL;
@property (readonly, copy, nonatomic) NSString *orderURL;
@property (readonly, copy, nonatomic) NSString *redpacketURL;
@property (readonly, nonatomic) UIColor *searchBarTextColor;
@property (readonly, nonatomic) UIColor *searchBarBorderColor;
@property (readonly, nonatomic) unsigned long long shopTheme;
@property (readonly, nonatomic) UIColor *navBarColor;
@property (readonly, nonatomic) UIColor *searchBarColor;
@property (nonatomic) BOOL hasShowLiveTip;

- (void)updateWithInfoResponse:(id)a0;
- (void)updateWithActivityResponse:(id)a0;
- (void)updateTopSearchInfo:(id)a0;
- (void).cxx_destruct;

@end
