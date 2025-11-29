@class NSString;

@interface TingASRListenerCpp : UnitRCObjcBaseProxyClass <TingASRListener>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onASRResult:(id)a0 listenId:(id)a1 chatRequestKey:(id)a2 isSuccess:(BOOL)a3 errorCode:(int)a4 errorMessage:(id)a5;
- (void)onASRDetectUserSpoken;

@end
