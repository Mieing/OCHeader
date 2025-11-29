@class NSString;

@interface NLEAlgProcessListenerImp_OC : NSObject <INLEAlgProcessListener_OC> {
    id /* block */ _callback;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onCallbackWithProgress:(float)a0 isFinish:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithCallback:(id /* block */)a0;

@end
