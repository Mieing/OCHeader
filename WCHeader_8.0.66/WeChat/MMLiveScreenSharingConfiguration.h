@class NSString;

@interface MMLiveScreenSharingConfiguration : MMUserService <MMServiceProtocol>

@property (readonly, nonatomic) BOOL canShareScreen;
@property (nonatomic) BOOL showsScreenSharingEntranceInOperationView;
@property (readonly, nonatomic) BOOL SEIAnchorStatusWithScreenSharingIncompatible;
@property (readonly, nonatomic) BOOL showsCameraOnlyInMinimizeMode;
@property (readonly, nonatomic) double aspectRatioOfCamera;
@property (nonatomic) struct CGSize { double width; double height; } sizeOfScreen;
@property (readonly, nonatomic) double sizeRatioOfCameraToScreen;
@property (readonly, nonatomic) double marginXRatioOfCameraToScreen;
@property (nonatomic) long long centerXSideOfCameraToScreen;
@property (nonatomic) double centerYRatioOfCameraToScreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
