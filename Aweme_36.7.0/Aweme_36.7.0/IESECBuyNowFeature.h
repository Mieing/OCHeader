@class NSString;

@interface IESECBuyNowFeature : NSObject <IESECBuyNowFeature>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)gotoBuyNowWithUrl:(id)a0 completion:(id /* block */)a1;
- (id)init;

@end
