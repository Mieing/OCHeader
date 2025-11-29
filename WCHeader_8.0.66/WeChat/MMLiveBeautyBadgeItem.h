@class NSString;

@interface MMLiveBeautyBadgeItem : NSObject

@property (retain, nonatomic) NSString *badgeId;
@property (nonatomic) unsigned long long baselineVersion;
@property (nonatomic) unsigned long long currentVersion;
@property (retain, nonatomic) NSString *currentGroup;
@property (nonatomic) unsigned long long lastVersion;
@property (retain, nonatomic) NSString *lastGroup;
@property (retain, nonatomic) NSString *categorizedId;
@property (readonly, nonatomic) BOOL active;

+ (id)badgeItemInJsonDictionary:(id)a0 categoryKey:(id)a1;

- (void)synchronizeAndNotifyDismiss;
- (void)addEventSubscriber:(id)a0;
- (void)removeEventSubscriber:(id)a0;
- (void).cxx_destruct;

@end
