@interface MJCaptionManager : NSObject

+ (BOOL)saveCaptionGroups:(id)a0 withAudioID:(id)a1;
+ (id)loadCaptionGroupsWithAudioID:(id)a0;
+ (void)clearCaptionCache;

@end
