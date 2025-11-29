@interface BDPShareOptionUtil : NSObject

+ (BOOL)isShareOptionSplitOn;
+ (void)registOnShareExtraParam:(id)a0 forUniqueID:(id)a1;
+ (BOOL)shouldNotHandleByPureShare:(id)a0;
+ (BOOL)isVideoMountShouldCheckTalent;
+ (id)extraDictionaryByFillTransparentDataIfNeeded:(id)a0 pagePath:(id)a1 uniqueID:(id)a2;
+ (id)videoPathFromOriginVideoPath:(id)a0 uniqueID:(id)a1;
+ (double)checkVideoPath:(id)a0 originPath:(id)a1 uniqueID:(id)a2 error:(id *)a3;
+ (id)onShareExtraParam:(id)a0;
+ (id)getHeaderStringWithFilePath:(id)a0;
+ (id)onExtraParam;

@end
