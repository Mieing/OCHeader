@interface AWEGrouponListFilterUtil : NSObject

+ (BOOL)containsHalfScreenWithDataList:(id)a0;
+ (id)filterCacheTransformerList:(id)a0;
+ (id)feedListFromDataList:(id)a0;
+ (id)transformerListFromDataList:(id)a0;
+ (BOOL)containsExposeCardWithDataList:(id)a0;
+ (BOOL)containsCornerMarkWithDataList:(id)a0;
+ (id)transformerListFromDataList:(id)a0 filterCardType:(long long)a1;
+ (id)transformerListFromDataList:(id)a0 targetCardType:(long long)a1 filterDataWithKey:(id)a2;
+ (BOOL)__containsExposeDataWithCardData:(id)a0;
+ (BOOL)__containsHalfScreenDataWithCradData:(id)a0;
+ (BOOL)__containsCornerMarkDataWithCradData:(id)a0;
+ (id)transformerCardTypesWithDataList:(id)a0;
+ (id)feedCardTypesWithDataList:(id)a0;

@end
