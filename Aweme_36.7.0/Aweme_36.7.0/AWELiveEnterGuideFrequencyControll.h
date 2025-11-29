@interface AWELiveEnterGuideFrequencyControll : NSObject

+ (unsigned long long)vsType;
+ (long long)waitDuration;
+ (void)negativeWithRoomID:(id)a0 enterFrom:(id)a1;
+ (void)updateAfterEnterGuide;
+ (void)updateGuideRoomIdList:(id)a0 enterFrom:(id)a1 isVSRoom:(BOOL)a2;
+ (id)guideClickNameWithShowType:(unsigned long long)a0 guideType:(unsigned long long)a1;
+ (id)guideNameWithType:(unsigned long long)a0;
+ (BOOL)canStartEnterGuideWithRoomID:(id)a0 enterFrom:(id)a1 isVSRoom:(BOOL)a2;
+ (BOOL)disableStartEnterGuideWithRoomID:(id)a0 enterFrom:(id)a1 isVSRoom:(BOOL)a2;
+ (BOOL)enableFrequency;
+ (double)limitEnterGuideSecond;
+ (long long)maxIgnoreEnterRoomTimes;
+ (unsigned long long)type;

@end
