@class NSNumber;

@interface AWELiveAutoEnterFrequencyControll : NSObject

@property (retain, nonatomic) NSNumber *roomId;

+ (BOOL)enableAutoEnter:(id)a0;
+ (BOOL)canStartAutoEnterByStrongControl:(id)a0;
+ (id)autoEnterConfig;
+ (void)weakFrequencyAction:(id)a0 roomID:(id)a1 anchorID:(id)a2 requestID:(id)a3;
+ (BOOL)canStartAutoEnter:(id)a0 with:(id)a1 isInnerFeed:(BOOL)a2;
+ (void)updateAfterAutoEnter;
+ (void)negativeAction:(id)a0 roomID:(id)a1 anchorID:(id)a2 requestID:(id)a3;
+ (long long)getStayTimeWith:(id)a0;
+ (void)updateGuideRoomIdList:(id)a0;

- (id)initWithRoomId:(id)a0;
- (void).cxx_destruct;

@end
