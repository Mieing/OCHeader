@class NSString;

@interface AWERVUtils : NSObject <AWERVUtilsProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)portraitStatusBarHeight;
+ (double)screenAbsoluteWidth;
+ (double)screenAbsoluteHeight;
+ (id)feedVC;
+ (void)addRoundingCornerWithView:(id)a0 byRoundingCorners:(unsigned long long)a1 cornerRadii:(struct CGSize { double x0; double x1; })a2;
+ (BOOL)isLandscapeVideo:(id)a0;
+ (BOOL)isFakeLandscapeVideo:(id)a0;
+ (BOOL)isPortraitVideo:(id)a0;
+ (id)cardCoverMatchingPlaceholderFromModel:(id)a0 isOneColumn:(BOOL)a1;
+ (BOOL)isIOS11;
+ (BOOL)shouldUpdateMixCellTitleWithModel:(id)a0;


@end
