@class NSString;

@interface AWEFeedUniversalManager : NSObject <AWEFeedUniversalManager>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)pointIsInsideWithLeftHand:(struct CGPoint { double x0; double x1; })a0 viewBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (BOOL)enableLeftHandExpendHotZoneWithIconName:(id)a0;
+ (long long)leftHandExpendHotZoneArea;
+ (id)leftHnadExpendHotZoneIcon;
+ (BOOL)currentEnableLeftHandExpand;


@end
