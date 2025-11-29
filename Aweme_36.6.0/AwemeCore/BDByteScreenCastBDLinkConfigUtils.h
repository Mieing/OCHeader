@interface BDByteScreenCastBDLinkConfigUtils : NSObject

+ (BOOL)openLocalCast;
+ (id)generateCastLogExtraWithContext:(id)a0 simplifyPlayInfoEnabled:(BOOL)a1;
+ (id)generateCastBusinessExtraWithContext:(id)a0;
+ (id)playInfoDictWithPlayItem:(id)a0 context:(id)a1;
+ (id)clarityInfosWithPlayerItem:(id)a0 containLocalCastUrl:(BOOL *)a1 context:(id)a2;
+ (id)bdlinkBusinessExtraParamsKey;
+ (id)bdlinkMediaInfoWithPlayerItem:(id)a0 context:(id)a1;

@end
