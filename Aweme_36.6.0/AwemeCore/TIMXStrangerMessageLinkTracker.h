@class NSString, NSMutableDictionary, TIMXSDKInstance;

@interface TIMXStrangerMessageLinkTracker : NSObject

@property (weak, nonatomic) TIMXSDKInstance *r;
@property (copy, nonatomic) NSString *currentNotifyId;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (retain, nonatomic) NSMutableDictionary *traceDict;

- (id)notifyIdWithContext:(id)a0;
- (id)msgLinkTrackerDicWithPBTrace:(id)a0;
- (void)receiveMessageNotifyOfStrangerWithContext:(id)a0;
- (void)willInsertStrangerMessageWithContext:(id)a0;
- (void)didInsertStrangerMessageWithContext:(id)a0;
- (void)clearTrackMessageLinkContextWithContext:(id)a0;
- (id)generateMessageLinkTrackContextWithOriginContext:(id)a0;
- (void)processMsgLinkWithMessages:(id)a0 msgTrace:(id)a1;
- (void).cxx_destruct;
- (double)currentTime;
- (id)initWithRootObject:(id)a0;

@end
