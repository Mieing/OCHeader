@interface BrandFinderLiveReporter : NSObject

+ (void)report1701Idkey:(unsigned int)a0;
+ (void)report1701IdkeyCheckLiveResp:(unsigned int)a0 succ:(BOOL)a1 hasBiz:(BOOL)a2;
+ (void)report1701IdkeyLiveBarListResp:(BOOL)a0 hasBiz:(BOOL)a1;
+ (void)report23044WithAction:(unsigned int)a0 username:(id)a1 scene:(unsigned int)a2 pageType:(unsigned int)a3 pageNote:(id)a4;
+ (void)report23044WithAction:(unsigned int)a0 username:(id)a1 scene:(unsigned int)a2 pageType:(unsigned int)a3 pageNote:(id)a4 bizType:(int)a5;
+ (void)report23692WithAction:(unsigned int)a0 cardCount:(long long)a1 expand:(BOOL)a2 exptType:(unsigned int)a3;
+ (void)report21053WithDataItem:(id)a0 action:(long long)a1 withIndex:(unsigned long long)a2 channelExtra:(id)a3 actionTS:(unsigned long long)a4;

@end
