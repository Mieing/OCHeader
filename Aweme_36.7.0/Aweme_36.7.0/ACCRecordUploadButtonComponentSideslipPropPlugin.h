@class NSString;
@protocol ACCFeatureComponent, ACCSideslipPropService, IESServiceProvider, ACCRecordUploadButtonService;

@interface ACCRecordUploadButtonComponentSideslipPropPlugin : NSObject <ACCSideslipPropServiceSubscriber, ACCFeatureComponentPlugin, ACCServiceBindable>

@property (class, readonly, nonatomic) id hostIdentifier;

@property (retain, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) id<ACCSideslipPropService> sideslipPropService;
@property (weak, nonatomic) id<ACCRecordUploadButtonService> uploadButtonService;
@property (nonatomic) BOOL needHiddenUploadLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCFeatureComponent> component;

@end
