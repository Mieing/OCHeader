@interface WCMomentsStarActionReporter : NSObject

+ (void)reportWithDataItem:(id)a0 actinType:(unsigned long long)a1 actionScene:(unsigned long long)a2 entranceScene:(long long)a3;
+ (unsigned long long)entranceTypeWithEntranceScene:(long long)a0;
+ (unsigned long long)privacyTypeWithPostPrivacy:(long long)a0;
+ (unsigned long long)ownerAlbumVisibleType;

@end
