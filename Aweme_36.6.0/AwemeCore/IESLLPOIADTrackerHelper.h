@interface IESLLPOIADTrackerHelper : NSObject

+ (void)mergeAdExtraDataFromPOIData:(id)a0 toAdContext:(id)a1;
+ (id)getAdTrackDictForPOISessionID:(id)a0;
+ (void)trackIfAccordCreativeIDWithPOIData:(id)a0 context:(id /* block */)a1;
+ (void)trackIfAccordAdTypeWithPOIData:(id)a0 context:(id /* block */)a1;
+ (void)trackIfAccordAdTypeWithPOISessionID:(id)a0 context:(id /* block */)a1;
+ (id)adTrackParamsForPOISessionID:(id)a0;

@end
