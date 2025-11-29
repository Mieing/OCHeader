@class NSString;

@interface AWEPadProgressUIServiceImpl : NSObject <AWEPadProgressUIService>

@property (nonatomic) struct { double containerHeight; double grayViewHeight; double grayViewRadius; double thumbViewRadius; double thumbViewWidth; double thumbViewHeight; double whiteOffset; double grayOffset; } progressUIConfig;
@property (nonatomic) struct { double hotZoneMinimumY; double hotZoneMaximumY; } hotZoneConfig;
@property (nonatomic) BOOL hotZoneOptEnable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)optimizeConfig;
+ (BOOL)optimizeEnable;
+ (id)sharedInstance;

- (void)performProgressUIOptimizeBlock:(id /* block */)a0;
- (void)performProgressHotZoneOptimizeBlock:(id /* block */)a0;
- (id)init;

@end
