@class NSString;

@interface AFDFriendsTabFirstFramePhase : NSObject <AFDFriendsTabFirstFramePhaseProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)endTimingFriendsTabFirstFrameForPhase:(unsigned long long)a0 trackInfo:(id)a1;
+ (void)startTimingFriendsTabFirstFrameForPhase:(unsigned long long)a0;
+ (void)endTimingFriendsTabFirstFrameForPhase:(unsigned long long)a0;
+ (void)setSourceFromForFirstFramePhase:(unsigned long long)a0;
+ (BOOL)isColdLaunchForFirstFramePhase;
+ (unsigned long long)phaseABType;
+ (id)phaseList;
+ (id)monitorTimingPrefixKeyForPhase:(unsigned long long)a0;
+ (id)monitorTimingSuffixKeyForPhase:(unsigned long long)a0;
+ (id)monitorTimingKeyForPhase:(unsigned long long)a0;
+ (void)removePhase:(unsigned long long)a0;
+ (void)setIsColdLaunchForFirstFramePhase:(BOOL)a0;
+ (id)sourceFromText;


@end
