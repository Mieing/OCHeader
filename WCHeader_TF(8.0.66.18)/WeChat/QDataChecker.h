@interface QDataChecker : NSObject

@property (nonatomic) BOOL isWorldBingSource;

- (void)startHandDrawMapVersionDetection;
- (void)startWorldMapVersionDetection;
- (id)appendWorldMapParameterStringFor:(id)a0;
- (void)handleWorldInfo:(id)a0;

@end
