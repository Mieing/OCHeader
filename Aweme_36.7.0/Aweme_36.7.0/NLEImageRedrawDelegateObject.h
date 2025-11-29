@class NSString;

@interface NLEImageRedrawDelegateObject : NSObject <NLEImageRedrawDelegate>

@property (copy, nonatomic) id /* block */ callBack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onRedrawFinish:(id)a0;
- (void).cxx_destruct;

@end
