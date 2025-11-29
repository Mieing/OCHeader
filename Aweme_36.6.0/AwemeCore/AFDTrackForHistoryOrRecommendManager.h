@class NSString;

@interface AFDTrackForHistoryOrRecommendManager : NSObject <AFDTrackForHistoryOrRecommendManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)historyOrRecTypeWithReferstring:(id)a0 sourceType:(unsigned long long)a1 cacheModel:(id)a2;
+ (BOOL)p_isFromFamiliarCache:(id)a0;


@end
