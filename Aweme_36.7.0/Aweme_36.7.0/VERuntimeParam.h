@interface VERuntimeParam : NSObject

@property (nonatomic) BOOL GLES3Usable;

+ (id)sharedInstance;

- (id)init;

@end
