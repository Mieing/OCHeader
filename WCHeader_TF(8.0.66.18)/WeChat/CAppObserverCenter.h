@class NSMutableDictionary, NSRecursiveLock;

@interface CAppObserverCenter : NSObject <NotifyFromMainCtrlDelegate> {
    NSRecursiveLock *m_lock;
    NSMutableDictionary *m_eventObserverDict;
    NSMutableDictionary *m_messageObserverDict;
    NSMutableDictionary *m_pbEventObserverDict;
    NSMutableDictionary *m_observer2EventDict;
    NSMutableDictionary *m_observer2MessageDict;
    NSMutableDictionary *m_observer2PbEventDict;
}

+ (id)defaultCenter;

- (id)init;
- (id)observerKey:(id)a0;
- (void)addObserverForEventOrMsg:(unsigned int)a0 observer:(id)a1 event2Observer:(id)a2 observer2Event:(id)a3;
- (void)removeObserverForEventOrMsg:(unsigned int)a0 observer:(id)a1 event2Observer:(id)a2 observer2Event:(id)a3;
- (void)removeObserverObject:(id)a0 event2Observer:(id)a1 observer2Event:(id)a2;
- (void)addEventObserverListItem:(unsigned int)a0 andValue:(id)a1;
- (void)removeEventObserverListItem:(unsigned int)a0 andValue:(id)a1;
- (void)removeEventObserverListItemByObject:(id)a0;
- (void)addMessageObserverListItem:(unsigned int)a0 andValue:(id)a1;
- (void)removeMessageObserverListItemByObject:(id)a0;
- (void)removeMessageObserverListItem:(unsigned int)a0 andValue:(id)a1;
- (void)addPBEventObserverListItem:(unsigned int)a0 andValue:(id)a1;
- (void)removePBEventObserverListItem:(unsigned int)a0 andValue:(id)a1;
- (void)removePBEventObserverListItemByObject:(id)a0;
- (id)observerListByEvent:(id)a0;
- (id)observerListByMessage:(id)a0;
- (id)observerListByPBEvent:(id)a0;
- (void)NotifyFromMainCtrl:(unsigned int)a0 MessageInfo:(id)a1 Event:(unsigned int)a2;
- (void)NotifyFromMainCtrl:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
