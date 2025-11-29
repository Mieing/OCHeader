@class NSString;

@interface IESECShopProductsLynxPlayingState : NSObject <IESECShopProductsPlayableState>

@property (copy, nonatomic) NSString *uniqueID;
@property (copy, nonatomic) NSString *envIdentifier;
@property (readonly, nonatomic) unsigned long long mediaType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
