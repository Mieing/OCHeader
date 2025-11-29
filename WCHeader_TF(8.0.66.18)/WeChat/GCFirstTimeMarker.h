@interface GCFirstTimeMarker : NSObject

@property (nonatomic) BOOL firstTimeAccess;

- (id)init;
- (BOOL)isFirstTimeAccess;

@end
