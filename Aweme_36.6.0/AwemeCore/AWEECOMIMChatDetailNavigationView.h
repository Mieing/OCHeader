@class AWEECOMIMPageTrackUtil, NSString, AWEECOMIMChatDetailNavigationExpandView, UILabel, UIView, NSMutableArray;
@protocol AWEECOMIMChatDetailNavigationViewDelegate;

@interface AWEECOMIMChatDetailNavigationView : AWEECOMIMCustomBaseView

@property (retain, nonatomic) UIView *titleContainer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIView *expandLine;
@property (retain, nonatomic) AWEECOMIMChatDetailNavigationExpandView *expandView;
@property (retain, nonatomic) NSMutableArray *iconViewArrM;
@property (copy, nonatomic) NSString *promotionJumpURL;
@property (nonatomic) BOOL isEnterStoreMasked;
@property (nonatomic) BOOL instantRetailShop;
@property (nonatomic) BOOL isNewStyle;
@property (weak, nonatomic) id<AWEECOMIMChatDetailNavigationViewDelegate> delegate;
@property (weak, nonatomic) AWEECOMIMPageTrackUtil *pageTrackUtil;

- (void)customInitSubviewLayouts;
- (void)navigationTitleDidClick:(id)a0;
- (void)bindShopInfo:(id)a0;
- (void).cxx_destruct;
- (void)customInit;

@end
