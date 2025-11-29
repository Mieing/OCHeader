@class TIMXOTotalUnreadCountManager;

@interface IESIMTotalUnreadCountManager : NSObject

@property (readonly, nonatomic) TIMXOTotalUnreadCountManager *timx_manager;

+ (id)sharedInstance;

- (void)removeObserve:(id)a0;
- (BOOL)addObserver:(id)a0;

@end
