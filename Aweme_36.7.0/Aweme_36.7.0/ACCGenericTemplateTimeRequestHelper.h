@interface ACCGenericTemplateTimeRequestHelper : NSObject

+ (void)fetchTimeWithSlotInfo:(id)a0 preferredTime:(id)a1 phAsset:(id)a2 infoFormat:(id)a3 completion:(id /* block */)a4;
+ (id)convertToGenericTemplateCustomInfoModelsWithDate:(id)a0 slotInfo:(id)a1 infoFormat:(id)a2;
+ (id)formatDate:(id)a0 formatStr:(id)a1;
+ (id)formatLunarDate:(id)a0 formatStr:(id)a1 index:(unsigned long long)a2;
+ (id)formatTimePeriodInChinese:(id)a0;
+ (id)formatDate:(id)a0 dateFormatter:(id)a1;
+ (unsigned long long)endMatchIndexWith:(id)a0 startIndex:(unsigned long long)a1;
+ (id)formatWeekDayForDate:(id)a0 formatStr:(id)a1 CNType:(BOOL)a2 upperType:(BOOL)a3;
+ (id)formatDate:(id)a0 formatStr:(id)a1 index:(unsigned long long)a2;
+ (id)convertDigitsToChinese:(id)a0 directMapping:(BOOL)a1;
+ (id)postPreprocessResult:(id)a0 miniFormatStr:(id)a1;

@end
