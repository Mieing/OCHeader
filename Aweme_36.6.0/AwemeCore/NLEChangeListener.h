@class NSString;
@protocol NLEChangeListenerDelegate;

@interface NLEChangeListener : NSObject <NLEChangeListenerDelegate> {
    struct shared_ptr<cut::model::_NLEChangeListener> { struct _NLEChangeListener *__ptr_; struct __shared_weak_count *__cntrl_; } _observer;
}

@property (weak, nonatomic) id<NLEChangeListenerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct shared_ptr<cut::model::_NLEChangeListener> { struct _NLEChangeListener *x0; struct __shared_weak_count *x1; })cppListener;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (void)didChange;

@end
