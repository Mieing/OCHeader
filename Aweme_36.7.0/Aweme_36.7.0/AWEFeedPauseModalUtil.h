@class NSString;

@interface AWEFeedPauseModalUtil : NSObject <AWEFeedPauseModalUtilProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getProgressControllerFromCellVC:(id)a0;
+ (void)changeProgressSliderHotZone:(id)a0 isDown:(BOOL)a1 distance:(double)a2;
+ (void)resetProgressSliderHotZone:(id)a0;
+ (BOOL)enableBottomTabFrequencyCheck;
+ (BOOL)shouldShowKeyFrame:(id)a0;


@end
