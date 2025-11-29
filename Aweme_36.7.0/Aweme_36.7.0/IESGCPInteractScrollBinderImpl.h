@class NSPointerArray, UIScrollView, NSString;
@protocol IESGCPInteractScrollParentScrollable;

@interface IESGCPInteractScrollBinderImpl : NSObject <IESGCPInteractScrollBinder>

@property (weak, nonatomic) id<IESGCPInteractScrollParentScrollable> parent;
@property (retain, nonatomic) NSPointerArray *children;
@property (retain, nonatomic) NSPointerArray *listeners;
@property (nonatomic) BOOL canParentScroll;
@property (nonatomic) BOOL canChildScroll;
@property (weak, nonatomic) UIScrollView *scrollingChild;
@property (nonatomic) long long recordFrequency;
@property (nonatomic) long long maxFrequency;
@property (nonatomic) BOOL notifyParentScrollingOpt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindParentScrollable:(id)a0;
- (void)addChildScrollable:(id)a0;
- (void)onChildScrolling:(id)a0;
- (void)onParentScrolling;
- (void)notifyParentScrolling;
- (void)notifyChildScrolling:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addListener:(id)a0;
- (void)log:(id)a0;

@end
