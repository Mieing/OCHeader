@interface TingObjcItemHelperCpp : NSObject

+ (int)getSourceType:(id)a0 playItem:(id)a1;
+ (BOOL)isMusicListenItem:(id)a0;
+ (BOOL)isMusicListenItemType:(int)a0;
+ (BOOL)isMpAudioListenItemType:(int)a0;
+ (BOOL)isFinderAudioListenItemType:(int)a0;
+ (BOOL)isLocalListenItemType:(int)a0;
+ (BOOL)isMusicLocalListenItemType:(int)a0;
+ (BOOL)isWeAppListenItemType:(int)a0;
+ (id)userShareCover:(id)a0;

@end
