@interface AnnieXCardModelNotifier : NSObject

+ (id)shareInstance;

- (void)notifyIfPreserveDataChangedByFront:(id)a0 cardModel:(id)a1;
- (void)notifyIfLynxPreserveDataChangedByFront:(id)a0 cardModel:(id)a1;
- (void)p_notifyIfLynxPreserveDataChangedByFront:(id)a0 cardModel:(id)a1 lynxView:(id)a2 mainThread:(BOOL)a3;
- (void)notifyIfDataChangedByFront:(id)a0 cardModel:(id)a1;

@end
