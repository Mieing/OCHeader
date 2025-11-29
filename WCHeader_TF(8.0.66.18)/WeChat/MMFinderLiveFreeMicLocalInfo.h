@interface MMFinderLiveFreeMicLocalInfo : NSObject <NSCopying>

@property (nonatomic) BOOL needSdkInfo;
@property (nonatomic) BOOL isAllowTalkFromServer;
@property (nonatomic) BOOL isTrtcReady;
@property (nonatomic) BOOL isMicReady;
@property (nonatomic) BOOL shouldHandleBreakTrtcMsg;
@property (nonatomic) unsigned long long startTalkingTime;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
