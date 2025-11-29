@class NSString;

@interface AWERichAwemeGoodElementTracker : NSObject <AWERichAwemeGoodElementTrackerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)additionInfoForEntranceShowFowModel:(id)a0;
+ (void)configTrackObject:(id)a0 model:(id)a1 extraInfo:(id)a2;
+ (id)tuwenTypeForModel:(id)a0;
+ (void)trackProductEntranceShow:(id)a0 extraInfo:(id)a1 btmInfoDict:(id)a2;
+ (void)trackProductEntranceClick:(id)a0 clickAreaString:(id)a1 extraInfo:(id)a2 btmInfoDict:(id)a3;
+ (id)getLinkClickAreaStringWithProductName:(id)a0 productId:(id)a1;
+ (void)trackProductStickerEntranceShowWithName:(id)a0 aweme:(id)a1 extraInfo:(id)a2;
+ (void)trackProductStickerEntranceClickWithName:(id)a0 aweme:(id)a1 extraInfo:(id)a2;
+ (void)trackProductTuwenFrameShowWithAweme:(id)a0 extraInfo:(id)a1;


@end
