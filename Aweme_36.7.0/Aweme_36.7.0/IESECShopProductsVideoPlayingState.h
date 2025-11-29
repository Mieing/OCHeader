@class IESECShopProductsImageLoadConfiguration, NSString, UIView, IESECShopInlinePlayItem;

@interface IESECShopProductsVideoPlayingState : NSObject <IESECShopProductsPlayableState>

@property (retain, nonatomic) IESECShopInlinePlayItem *playItem;
@property (nonatomic) long long maximumDuration;
@property (weak, nonatomic) UIView *container;
@property (copy, nonatomic) NSString *uniqueID;
@property (retain, nonatomic) IESECShopProductsImageLoadConfiguration *playerIcon;
@property (readonly, nonatomic) unsigned long long mediaType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
