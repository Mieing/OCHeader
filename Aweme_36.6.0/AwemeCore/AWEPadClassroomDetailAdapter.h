@class NSString;

@interface AWEPadClassroomDetailAdapter : HTSService <AWEPadClassroomDetailAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)videoDetailContainerWidthPercent;
- (unsigned long long)supportedPadInterfaceOrientations;
- (double)playerHeightPercentMaxLimit;
- (BOOL)supportPadAutorotate;
- (double)playerHeightPercentMinLimit;
- (BOOL)isLandscape;

@end
