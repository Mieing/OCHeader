@class IESLivePublicScreenView, NSMutableDictionary, NSString;

@interface IESLivePublicScreenNotificationCenter : NSObject <HTSLiveMessageListScrollActions>

@property (weak, nonatomic) IESLivePublicScreenView *publicScreen;
@property (retain, nonatomic) NSMutableDictionary *observerDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDIContext:(id)a0;
- (void)addSubscriber:(id)a0 forEvent:(id)a1;
- (void)messageListViewWillBeginDragging:(id)a0;
- (void)messageListViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)messageListViewDidEndDecelerating:(id)a0;
- (void)messageListViewReachBottom;
- (void)messageListStateReset;
- (void)notifyObserversForEvent:(id)a0 block:(id /* block */)a1;
- (void)mergeObservers:(id)a0;
- (void).cxx_destruct;
- (void)removeSubscriber:(id)a0;

@end
