@class NSString;
@protocol ACCAdvanceEditMainTrackActionServiceProtocol, ACCTrimCropBottomBarServiceProtocol;

@interface ACCTCETrimEditUIControlComponent : ACCTrimCropBaseComponent <ACCAdvanceEditMainTrackActionDelegate>

@property (weak, nonatomic) id<ACCAdvanceEditMainTrackActionServiceProtocol> mainTrackActionService;
@property (weak, nonatomic) id<ACCTrimCropBottomBarServiceProtocol> bottomBarService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
