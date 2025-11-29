@class NSString, IESLiveCombineSubject;
@protocol IESLiveCompoundSubscription;

@interface IESLiveInteractionLayoutChangePublisher : NSObject <IESLiveInteractionLayoutSubscribable>

@property (retain, nonatomic) id<IESLiveCompoundSubscription> currentLayoutDidChangedDisposable;
@property (retain, nonatomic) IESLiveCombineSubject *currentLayoutDidChangedSubject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onCurrentLayoutDidChangedUsingBlock:(id /* block */)a0;
- (id)onCurrentLayoutDidChangedWithSubscriptionUsingBlock:(id /* block */)a0;
- (void)onCurrentLayoutWillChangedUsingBlock:(id /* block */)a0;
- (id)onCurrentLayoutWillChangedWithSubscriptionUsingBlock:(id /* block */)a0;
- (void)onCurrentLayoutDidReloadUsingBlock:(id /* block */)a0;
- (void)publishLayoutChangedFrom:(id)a0 to:(id)a1;
- (void).cxx_destruct;
- (void)dispose;

@end
