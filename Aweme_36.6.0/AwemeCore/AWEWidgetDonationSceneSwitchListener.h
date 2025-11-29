@class NSArray, NSString, AWEWidgetDonationSceneModel;

@interface AWEWidgetDonationSceneSwitchListener : NSObject <AWEUGEventListenerDelegate>

@property (copy, nonatomic) NSArray *eventList;
@property (retain, nonatomic) AWEWidgetDonationSceneModel *donationSceneModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reportEvent:(id)a0 params:(id)a1;
- (id)initWithDonationSceneModel:(id)a0;
- (void).cxx_destruct;

@end
