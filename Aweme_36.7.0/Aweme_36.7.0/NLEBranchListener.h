@class NSString;
@protocol NLEBranchListenerDelegate;

@interface NLEBranchListener : NSObject <NLEBranchListenerDelegate> {
    struct shared_ptr<cut::model::_NLEBranchListener> { struct _NLEBranchListener *__ptr_; struct __shared_weak_count *__cntrl_; } _observer;
}

@property (weak, nonatomic) id<NLEBranchListenerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct shared_ptr<cut::model::_NLEBranchListener> { struct _NLEBranchListener *x0; struct __shared_weak_count *x1; })cppListener;
- (void)branchDidChange;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;

@end
