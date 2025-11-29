@class AWEECOMIMChatTopInfoItem, NSString, AWEECOMIMChatTopInfoView;
@protocol AWEECOMIMTopChatInfoBannerCellDelegate;

@interface AWEECOMIMTopChatInfoBannerCell : UICollectionViewCell <AWEECOMIMChatTopInfoViewDelegate>

@property (retain, nonatomic) AWEECOMIMChatTopInfoView *chatInfoView;
@property (retain, nonatomic) AWEECOMIMChatTopInfoItem *item;
@property (weak, nonatomic) id<AWEECOMIMTopChatInfoBannerCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightWithIsMultiItem:(BOOL)a0;

- (void)bindItem:(id)a0 itemIndex:(long long)a1 itemCount:(long long)a2 encryptedShopID:(id)a3;
- (long long)rightsViewCount;
- (void)chatTopInfoViewDidClickActionBtn:(id)a0 itemIndex:(long long)a1;
- (void)chatTopInfoViewButtonEventAfterRequest:(id)a0 itemIndex:(long long)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
