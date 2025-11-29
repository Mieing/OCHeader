@class NSString;

@interface SonicPlayerListenerImpl : NSObject <SonicPlayerListener> {
    id /* block */ block_;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onCanPlay;
- (void)onCanDraw;
- (void)onSeeked;
- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0;
- (void)onError:(id)a0;
- (void)onEnd;

@end
