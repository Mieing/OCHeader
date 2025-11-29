@class NSString;
@protocol NLEEditorListenerDelegate;

@interface NLEEditorListener_OC : NSObject <NLEEditorListenerDelegate> {
    struct shared_ptr<cut::model::_NLEEditorListener> { struct _NLEEditorListener *__ptr_; struct __shared_weak_count *__cntrl_; } _observer;
}

@property (weak, nonatomic) id<NLEEditorListenerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct shared_ptr<cut::model::_NLEEditorListener> { struct _NLEEditorListener *x0; struct __shared_weak_count *x1; })cppListener;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (void)didChange;

@end
