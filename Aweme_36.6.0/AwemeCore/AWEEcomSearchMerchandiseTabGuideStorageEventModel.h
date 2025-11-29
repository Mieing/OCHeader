@class AWEEcomSearchMerchandiseTabGuideStorageDailyTimestampModel;

@interface AWEEcomSearchMerchandiseTabGuideStorageEventModel : AWEBaseApiModel

@property (retain, nonatomic) AWEEcomSearchMerchandiseTabGuideStorageDailyTimestampModel *showEventModel;
@property (retain, nonatomic) AWEEcomSearchMerchandiseTabGuideStorageDailyTimestampModel *clickEventModel;
@property (retain, nonatomic) AWEEcomSearchMerchandiseTabGuideStorageDailyTimestampModel *showAndNotClickEventModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void)cleanExpiredGroupsWithCycleDayNum:(long long)a0;
- (void).cxx_destruct;

@end
