@interface IESECShopFloatLivePositionManager : NSObject

@property (nonatomic) struct CGPoint { double x; double y; } cachedLatestPosition;
@property (nonatomic) BOOL isBrandShopV2;

+ (id)sharedInstance;

- (struct CGPoint { double x0; double x1; })latestPosition;
- (void)recordPosition:(struct CGPoint { double x0; double x1; })a0;
- (id)init;

@end
