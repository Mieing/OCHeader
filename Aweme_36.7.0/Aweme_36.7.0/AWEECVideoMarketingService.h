@class NSString;

@interface AWEECVideoMarketingService : HTSService <AWEECVideoMarketingService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)triggerAnchorBenefitWithAwemeModel:(id)a0 actionFrom:(long long)a1 enterFrom:(id)a2 completion:(id /* block */)a3;
+ (id)actionFromStringWithActionFrom:(long long)a0;


@end
