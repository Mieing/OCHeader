@class NSDictionary;

@interface AWELiveNewAutoEnterFrequencyControll : NSObject

@property (retain, nonatomic) NSDictionary *autoEnterConfig;

+ (long long)countDownDuration:(id)a0;
+ (id)autoEnterConfig;
+ (BOOL)checkHasEnterRoom:(id)a0;
+ (id)getAutoEnterConfigParams:(id)a0 enterFrom:(id)a1 isInnerFeed:(BOOL)a2;
+ (void)updateGuideRoomIdList:(id)a0 enterFrom:(id)a1 model:(id)a2 configDict:(id)a3 isInnerFeed:(BOOL)a4;
+ (long long)waitDuration:(id)a0;
+ (BOOL)isliveTabWithEnterFrom:(id)a0;
+ (id)frequencyConfig:(id)a0;
+ (void)updateAfterAutoEnter:(id)a0 enterFrom:(id)a1 isInnerFeed:(BOOL)a2;
+ (BOOL)useSildeOut:(id)a0;
+ (void)negativeAction:(id)a0 roomID:(id)a1 anchorID:(id)a2 requestID:(id)a3 enterFrom:(id)a4 configDict:(id)a5 isInnerFeed:(BOOL)a6;
+ (id)autoEnterBadFeedCountWithParams:(id)a0 enterFrom:(id)a1 isInnerFeed:(BOOL)a2;
+ (BOOL)canStartAutoEnterWithRoom:(id)a0 enterFrom:(id)a1 configDict:(id)a2 isInnerFeed:(BOOL)a3;
+ (BOOL)disableStartAutoEnterWithRoomID:(id)a0 enterFrom:(id)a1 configDict:(id)a2 isInnerFeed:(BOOL)a3;
+ (id)disableAutoEnterTimeWithParams:(id)a0 enterFrom:(id)a1 isInnerFeed:(BOOL)a2;

- (void).cxx_destruct;

@end
