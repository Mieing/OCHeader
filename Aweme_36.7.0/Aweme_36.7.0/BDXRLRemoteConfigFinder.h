@interface BDXRLRemoteConfigFinder : NSObject

+ (id)_findRemoteConfigProgressivelyBy:(id)a0 matchWholePath:(BOOL)a1;
+ (id)_findRemoteConfigOfFivePathComponentsBy:(id)a0 defaultPrefixToAk:(id)a1 taskConfig:(id)a2;
+ (BOOL)_remoteParametersProgressivelyWithURLString:(id)a0 resourceMeta:(id)a1 remoteInfo:(id)a2 matchWholePath:(BOOL)a3;
+ (id)findConfigBy:(id)a0 channel:(id)a1 resourceMeta:(id)a2;
+ (BOOL)_matchWithPrefix:(id)a0 pathComponents:(id)a1 prefixIndex:(unsigned long long)a2 resourceMeta:(id)a3 remoteInfo:(id)a4;
+ (id)findRemoteConfigBy:(id)a0 defaultPrefixToAk:(id)a1 taskConfig:(id)a2;

@end
