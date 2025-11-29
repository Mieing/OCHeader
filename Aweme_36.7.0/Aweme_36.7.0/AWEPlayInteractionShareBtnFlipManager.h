@class NSLock, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AWEPlayInteractionShareBtnFlipManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *recentAwemes;
@property (retain, nonatomic) NSLock *recentAwemesLock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *recentAwemesWriteQueue;

+ (id)sharedInstance;

- (void)updateRecentAweme:(id)a0 referString:(id)a1;
- (id)handleEntranceLabelRequestActionMessage:(id)a0;
- (id)handleEntranceLabelResultActionMessage:(id)a0;
- (void)p_writeRecentAweme:(id)a0 referString:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
