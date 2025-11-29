@class NSString, NSObject;
@protocol WCFinderPostMgrDelegate;

@interface WCFinderPostMgrDelegateProxy : NSProxy <WCFinderPostMgrDelegate>

@property (weak, nonatomic) NSObject<WCFinderPostMgrDelegate> *originDelegate;
@property (weak, nonatomic) NSObject<WCFinderPostMgrDelegate> *forwardDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)respondsToSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)onPostActionFinish;
- (void).cxx_destruct;

@end
