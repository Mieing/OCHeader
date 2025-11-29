@class NSString;
@protocol IESECLivePromotionCardProviderService, IESECLivePromotionCardProviderBizDelegate;

@interface AWEECLivePromotionCardProviderServiceImpl : NSObject <AWEECLivePromotionCardProviderService>

@property (retain, nonatomic) id<IESECLivePromotionCardProviderService> providerService;
@property (retain, nonatomic) id<IESECLivePromotionCardProviderBizDelegate> fakeDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cardData:(id)a0 delegate:(id)a1;

@end
