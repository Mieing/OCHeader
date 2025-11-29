@interface IESLiveAnnouncementUtil : NSObject

+ (BOOL)entranceTypeIsInLiveRoom:(long long)a0;
+ (BOOL)entranceTypeIsInIMPage:(long long)a0;
+ (void)setCloseLiveStickerCount:(long long)a0 isAnchor:(BOOL)a1;
+ (BOOL)entranceTypeIsInFEPage:(long long)a0;
+ (void)logI:(id)a0 extraBuilder:(id /* block */)a1;
+ (BOOL)entranceTypeIsInVideoPage:(long long)a0;
+ (BOOL)announcementDataIsSingle:(id)a0;
+ (id)pictureShareTextFor:(id)a0;
+ (id)scheduledDateDotTextFrom:(long long)a0;
+ (id)cycleDescriptionFrom:(id)a0;
+ (id)timeDescriptionFrom:(long long)a0;
+ (id)dateTupleFrom:(long long)a0;
+ (id)daysDict;
+ (id)closeLiveStickerKey:(BOOL)a0;
+ (BOOL)announcementAnchorGetResponseDataIsSingle:(id)a0;
+ (long long)closeLiveStickerCount:(BOOL)a0;
+ (id)kvStore;

@end
