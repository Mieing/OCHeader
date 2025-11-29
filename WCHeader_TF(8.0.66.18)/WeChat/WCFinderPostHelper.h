@class NSObject, NSString, WCFinderPostMgr, WCFinderPostMgrDelegateProxy;

@interface WCFinderPostHelper : NSObject <WCFinderPostMgrDelegate>

@property (retain, nonatomic) WCFinderPostMgr *postMgr;
@property (weak, nonatomic) NSObject *owner;
@property (retain, nonatomic) WCFinderPostMgrDelegateProxy *vcDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showPostActionSheet:(id)a0 params:(id)a1;

- (void)onPostActionFinish;
- (void)onPostHandleBusinessActionPostVC:(id)a0 postSession:(id)a1;
- (void).cxx_destruct;

@end
