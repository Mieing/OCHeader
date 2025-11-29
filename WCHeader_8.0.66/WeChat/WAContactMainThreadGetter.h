@class NSString, MMTimer;

@interface WAContactMainThreadGetter : NSObject <WAContactMgrExtension> {
    id /* block */ _handler;
    MMTimer *_timer;
    NSString *_updateKey;
    unsigned long long _getType;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)getWeAppContact:(id)a0 getType:(unsigned long long)a1 version:(unsigned long long)a2 requestSource:(id)a3 handler:(id /* block */)a4 timeout:(unsigned int)a5;
- (void)onUpdateContactTimeout:(id)a0;
- (void)onUpdateWeAppContactSuccess:(id)a0;
- (void)onUpdateWeAppContactFailedWithKey:(id)a0 type:(unsigned long long)a1 errMsg:(id)a2;
- (void).cxx_destruct;

@end
