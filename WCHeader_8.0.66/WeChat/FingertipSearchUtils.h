@interface FingertipSearchUtils : NSObject

+ (long long)getFootprintResidentMemory;
+ (id)fingerSearchDirPath;
+ (id)getMainKeywordsPath;
+ (id)getRealTimeDataPath;
+ (id)getByteSearchModelPath;
+ (unsigned int)getMatchContentMinLength;
+ (unsigned int)getMatchContentMaxLength;
+ (unsigned int)getMaxKeywordCount;
+ (unsigned int)getSearchMaxCount;
+ (BOOL)isCloseFingertipSearch;
+ (unsigned int)getSearchPrime;
+ (BOOL)IsOpenBytesSearch;
+ (BOOL)IsCloseBytesSearch;
+ (BOOL)IsOpenRegexSearch;
+ (void)refreshResourceWithPath:(id)a0 TargetPath:(id)a1;
+ (unsigned int)checkMainKeywordResource;
+ (int)getMaxPrimeWithValue:(int)a0;

@end
