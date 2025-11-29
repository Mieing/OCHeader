@interface TPStrategyUtil : NSObject

+ (BOOL)canUseThumbPlayerForVideo:(id)a0;
+ (BOOL)canUseSystemPlayerForVideo:(id)a0;
+ (id)convertPlayerTypeToString:(long long)a0;
+ (id)convertPlayerSceneToString:(long long)a0;
+ (BOOL)canDecodeByHadrwareForVideo:(id)a0;
+ (BOOL)canDecodeBySoftwareForVideo:(id)a0;

@end
