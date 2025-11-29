@class NSString;
@protocol ACCRecordSelectPropService, ACCSideslipPropService, IESServiceProvider, ACCFeatureComponent;

@interface ACCRecordSelectPropComponentSideslipPropPlugin : NSObject <ACCFeatureComponentPlugin, ACCServiceBindable>

@property (class, readonly, nonatomic) id hostIdentifier;

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) id<ACCSideslipPropService> sideslipPropService;
@property (weak, nonatomic) id<ACCRecordSelectPropService> selectPropService;
@property (nonatomic) BOOL canDisplayPropBtn;
@property (nonatomic) BOOL canDisplayPropBtnTitle;
@property (weak, nonatomic) id<ACCFeatureComponent> component;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
