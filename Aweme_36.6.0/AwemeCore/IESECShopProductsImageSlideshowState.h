@class IESECShopSlideShowContainer, NSString;

@interface IESECShopProductsImageSlideshowState : NSObject <IESECShopProductsPlayableState>

@property (nonatomic) long long currentIndex;
@property (weak, nonatomic) IESECShopSlideShowContainer *container;
@property (copy, nonatomic) NSString *uniqueID;
@property (readonly, nonatomic) unsigned long long mediaType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
