@class ACCCameraSubscription, NSMapTable, NSString;
@protocol AEKSubscriberProviderDelegate;

@interface AEKSubscriberProviderImpl : NSObject <AEKSubscriberProvider>

@property (retain, nonatomic) ACCCameraSubscription *lifeCycleSubscription;
@property (retain, nonatomic) ACCCameraSubscription *megaDataSubscription;
@property (retain, nonatomic) NSMapTable *diffSubscription;
@property (retain, nonatomic) ACCCameraSubscription *doneSubscription;
@property (retain, nonatomic) ACCCameraSubscription *previewSubscription;
@property (retain, nonatomic) NSMapTable *renderSubscription;
@property (retain, nonatomic) ACCCameraSubscription *branchSubscription;
@property (weak, nonatomic) id<AEKSubscriberProviderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;

@end
