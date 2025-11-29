@class RTVVoipMonitor, NSString;
@protocol RTVPushDataSourceComponentInterface;

@interface RTVPushDataSourceComponent_APNS : RTVComponentBase <RTVPushDataSourceComponent_APNSInterface>

@property (readonly, nonatomic) id<RTVPushDataSourceComponentInterface> dataSourceComponent;
@property (readonly, nonatomic) RTVVoipMonitor *voipMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

@end
