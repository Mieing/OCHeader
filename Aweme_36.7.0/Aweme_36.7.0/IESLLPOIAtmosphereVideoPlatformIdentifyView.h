@class NSString, IESLLPOIShelfContainerComponentViewModel, IESLLPOIShelfModuleModel;
@protocol IESLLPOIAtmosphereVideoPlatformIdentifyViewDelegate;

@interface IESLLPOIAtmosphereVideoPlatformIdentifyView : UIView <IESLLPOIShelfListViewDelegate>

@property (retain, nonatomic) IESLLPOIShelfContainerComponentViewModel *viewModel;
@property (retain, nonatomic) IESLLPOIShelfModuleModel *shelfModuleModel;
@property (weak, nonatomic) id<IESLLPOIAtmosphereVideoPlatformIdentifyViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
