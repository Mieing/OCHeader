@interface BDByteScreenPlayControlViewLayoutModel : NSObject

@property (nonatomic) double mainTitleLabelOffsetTopOffset;
@property (nonatomic) double actionButtonContainerTopOffset;
@property (nonatomic) struct CGSize { double width; double height; } refreshBtnSize;
@property (nonatomic) BOOL shouldHideRefreshBtn;
@property (nonatomic) BOOL shouldHideChangeDeviceBtn;
@property (nonatomic) unsigned long long controlViewType;
@property (nonatomic) double changeDeviceImageLeftOffset;
@property (nonatomic) double changeDeviceImageWidth;
@property (nonatomic) double changeDeviceImageHeight;
@property (nonatomic) struct CGPoint { double x; double y; } containerAreaCenterPosition;
@property (nonatomic) unsigned long long additionActionType;
@property (nonatomic) unsigned long long additionActionOptions;
@property (nonatomic) unsigned long long scenario;

- (id)init;

@end
