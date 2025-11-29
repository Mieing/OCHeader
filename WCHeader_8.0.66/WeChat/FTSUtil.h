@interface FTSUtil : NSObject

+ (id)getUserFTSRootDir;
+ (id)getFTSDBPath;
+ (long long)GetMd5Int64:(id)a0;
+ (id)FTSOpenIMAppIdLogFromContact:(id)a0;
+ (id)FTSOpenIMAppIdOrNickname:(id)a0;
+ (void)commonSearchClickReport:(id)a0;
+ (double)getSearchCancelButtonWidth;
+ (unsigned long long)calculateCharacterCount:(id)a0;
+ (id)encryptForLog:(id)a0;
+ (unsigned int)ConvertClickTypeFromFeedType:(unsigned int)a0;
+ (unsigned int)CalMMContactCountForGroupContact:(id)a0 dicCache:(id)a1;
+ (id)GetStatTopHitInfoWithTotal:(unsigned int)a0 specCount:(unsigned int)a1;
+ (id)GetClickCountFormatForFeature:(id)a0;
+ (id)GetClickDaysFormatForFeature:(id)a0;
+ (unsigned int)GetLastSearchTimeForGroup:(id)a0;
+ (id)FormatGroupMatchString:(id)a0;
+ (id)parseForContent:(id)a0 arrTagRanges:(id)a1;
+ (id)getABTestItemWithKey:(id)a0;

@end
