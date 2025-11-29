@class NSString;

@interface IESECGoodsDetailInjection : NSObject <NSObject, IESECGoodsDetailHostInjection>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)additionConfigGoodsFeed:(id)a0;
+ (void)additionConfigGoodsDetail:(id)a0;
+ (void)goodsDetailTryPlayAwemePlayer:(id)a0;
+ (void)goodsDetailTryPauseAwemePlayer:(id)a0;
+ (BOOL)goodsDetailIsPlayingAwemePlayer:(id)a0;
+ (void)goodsDetail:(id)a0 willEmbedIn:(id)a1;
+ (void)goodsDetail:(id)a0 didSwitchToMode:(long long)a1;
+ (void)videoSearchDetail:(id)a0 isEnterGoodsDetail:(BOOL)a1;


@end
