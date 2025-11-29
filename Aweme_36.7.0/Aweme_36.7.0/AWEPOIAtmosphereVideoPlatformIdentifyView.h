@class AWEPOIShelfContainerComponentViewModel, AWEPOIShelfModuleModel, NSString;
@protocol AWEPOIAtmosphereVideoPlatformIdentifyViewDelegate;

@interface AWEPOIAtmosphereVideoPlatformIdentifyView : UIView <AWEPOIShelfListViewDelegate>

@property (retain, nonatomic) AWEPOIShelfContainerComponentViewModel *viewModel;
@property (retain, nonatomic) AWEPOIShelfModuleModel *shelfModuleModel;
@property (weak, nonatomic) id<AWEPOIAtmosphereVideoPlatformIdentifyViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
