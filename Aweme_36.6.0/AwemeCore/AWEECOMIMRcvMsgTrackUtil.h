@class NSMutableDictionary, NSMutableSet;

@interface AWEECOMIMRcvMsgTrackUtil : NSObject

@property (retain, nonatomic) NSMutableDictionary *modelMap;
@property (retain, nonatomic) NSMutableSet *rcvMsgIdSet;
@property (retain, nonatomic) NSMutableSet *displayedMsgIdSet;
@property (nonatomic) long long rcvMsgTrackType;
@property (nonatomic) BOOL enable;

+ (id)sharedInstance;

- (void)setupNotification;
- (void)handleMsgDisplayedWithMsgIdList:(id)a0;
- (void)longConnectionReceiveMessage:(id)a0;
- (void)messageDidInsert:(id)a0;
- (void)handleMsgBegin:(id)a0 extra:(id)a1;
- (void)handleMsgEnd:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)start;
- (void)dealloc;

@end
