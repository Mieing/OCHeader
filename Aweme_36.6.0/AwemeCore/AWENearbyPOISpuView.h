@class NSString, UIImageView, UILabel, UIView;
@protocol AWENearbyPOIInfoCardModel;

@interface AWENearbyPOISpuView : UIView <AWENearbyPOISpuViewProtocol>

@property (retain, nonatomic) id<AWENearbyPOIInfoCardModel> model;
@property (retain, nonatomic) UIView *itemContainerView;
@property (retain, nonatomic) UIView *seperatorLine;
@property (retain, nonatomic) UIImageView *itemIconView;
@property (retain, nonatomic) UILabel *itemIconLabel;
@property (retain, nonatomic) UILabel *itemTitleLabel;
@property (retain, nonatomic) UILabel *itemPriceLabel;
@property (retain, nonatomic) UILabel *itemCountLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
