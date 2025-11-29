@class AWEECOMIMChatTopRightsView, UIView, NSString, UIImageView, UIButton, YYLabel, AWEECOMIMChatTopInfoItem, BDPCDDynamicCardPriceView;
@protocol AWEECOMIMChatTopInfoViewDelegate;

@interface AWEECOMIMChatTopInfoView : AWEECOMIMCustomBaseView

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIButton *rightButton;
@property (retain, nonatomic) UIView *textContainerView;
@property (retain, nonatomic) UIImageView *importantActivitiesView;
@property (retain, nonatomic) YYLabel *themeLabel;
@property (retain, nonatomic) YYLabel *contentLabel;
@property (retain, nonatomic) AWEECOMIMChatTopRightsView *rightsView;
@property (retain, nonatomic) BDPCDDynamicCardPriceView *priceView;
@property (retain, nonatomic) AWEECOMIMChatTopInfoItem *chatInfoItem;
@property (nonatomic) long long itemIndex;
@property (copy, nonatomic) NSString *encryptedShopID;
@property (weak, nonatomic) id<AWEECOMIMChatTopInfoViewDelegate> delegate;

+ (double)heightWithIsMultiItem:(BOOL)a0;
+ (double)goodIconHeight;
+ (double)bottomPaddingWithIsMultiItem:(BOOL)a0;
+ (id)primaryColor;
+ (double)topPadding;

- (void)rightButtonClick:(id)a0;
- (void)customInitSubviewLayouts;
- (long long)rightsViewCount;
- (void)_relayoutSubviews:(id)a0;
- (struct CGSize { double x0; double x1; })rightButtonSize;
- (void)bindChatItem:(id)a0 itemIndex:(long long)a1 itemCount:(long long)a2 encryptedShopID:(id)a3;
- (void).cxx_destruct;
- (void)customInit;

@end
