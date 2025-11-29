@interface BDUploadUtilTool : NSObject

@property (nonatomic) BOOL enableNativeLog;

+ (id)sharedInstance;

- (void)setLogCallback:(id /* block */)a0;
- (void)enableNativeLogFunc:(BOOL)a0;
- (id)init;

@end
