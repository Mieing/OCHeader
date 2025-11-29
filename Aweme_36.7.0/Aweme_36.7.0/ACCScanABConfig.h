@class NSString;

@interface ACCScanABConfig : NSObject <ACCScanABConfigStudioProxy>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)scanHomeFeedEntrance;
+ (struct CGSize { double x0; double x1; })scanBefViewDemoRenderSize;
+ (long long)shootScanShootBtnTipTime;
+ (long long)shootScanHistoryCount;
+ (long long)shootScanEditStickerCount;
+ (BOOL)shootScanResultRoute;
+ (float)shakingDetectStabilityLowThreshold;
+ (float)shakingDetectStabilityHightThreshold;
+ (int)shakingDetectStabilityCalNum;
+ (BOOL)shootScanShakingOpen;
+ (BOOL)shootScanImageDefinitionOpen;
+ (int)scanMaxTrackObjectCount;
+ (id)shootScanTitleDefault;
+ (id)shootScanTitleShaking;
+ (id)shootScanSubtitle;
+ (struct CGSize { double x0; double x1; })scanQrcodeSize;


@end
