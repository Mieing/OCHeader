@interface BDSCMediaItemProcessingUtils : NSObject

+ (unsigned long long)processingCastItem:(id)a0 context:(id)a1 useDefaultClarity:(BOOL)a2;
+ (id)protocolTypeDesc:(unsigned long long)a0;
+ (id)suitableClarityWithPlayItem:(id)a0 expectClarity:(id)a1 context:(id)a2 processingReason:(unsigned long long *)a3;

@end
