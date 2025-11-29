@interface MMFinderLiveStreamTypeInfo : NSObject <NSCopying>

@property (nonatomic) BOOL isPureAudioMode;
@property (nonatomic) BOOL hasAudioMicUser;
@property (nonatomic) BOOL isConnectingMic;
@property (nonatomic) unsigned long long updateTime;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
