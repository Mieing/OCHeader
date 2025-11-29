@class NSString;
@protocol ACCFeatureComponent;

@interface AUCEditFinishComponentBtnTitlePlugin : NSObject <ACCFeatureComponentPlugin, ACCServiceBindable, ACCSequenceEditServicePlayerSubscriber>

@property (class, readonly, nonatomic) id hostIdentifier;

@property (weak, nonatomic) id<ACCFeatureComponent> component;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sequenceEditService:(id)a0 changedWithAddedIndexSet:(id)a1 deletedIndexSet:(id)a2;
- (id)hostComponent;
- (void)bindServices:(id)a0;
- (void)bindToComponent:(id)a0;
- (void)updateButtonTitle;
- (void).cxx_destruct;

@end
