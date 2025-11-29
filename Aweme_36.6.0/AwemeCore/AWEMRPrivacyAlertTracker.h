@class NSString, AWEAlertContext;

@interface AWEMRPrivacyAlertTracker : NSObject <AWEMRPrivacyAlertTracker>

@property (retain, nonatomic) AWEAlertContext *context;
@property (nonatomic) BOOL completed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
