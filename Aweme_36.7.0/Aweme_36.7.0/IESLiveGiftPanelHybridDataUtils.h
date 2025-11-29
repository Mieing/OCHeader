@interface IESLiveGiftPanelHybridDataUtils : NSObject

+ (id)trackerExtraWithCurrentSelectedGiftItem:(id)a0 currentPageType:(unsigned long long)a1 recipientRouter:(id)a2;
+ (id)relatedGiftsWithDataSharing:(id)a0;
+ (id)lynxDataWithDataSharing:(id)a0 recipientRouter:(id)a1;
+ (BOOL)shouldShowSceneMarketingWithDataSharing:(id)a0 recipientRouter:(id)a1;
+ (id)trackerExtraWithDataSharing:(id)a0 recipientRouter:(id)a1;
+ (BOOL)shouldShowMarketingFromExtraWithDataSharing:(id)a0 recipientRouter:(id)a1;
+ (id)sceneMarketingDataWithDataSharing:(id)a0 recipientRouter:(id)a1;
+ (unsigned long long)recipientTypeWithDataSharing:(id)a0 recipientRouter:(id)a1;
+ (BOOL)shouldShowMarketingFromExtraWithCurrentSelectedGiftItem:(id)a0 recipientRouter:(id)a1;
+ (BOOL)shouldShowSceneMarketingWithCurrentSelectedGiftItem:(id)a0 currentPageType:(unsigned long long)a1 recipientRouter:(id)a2;

@end
