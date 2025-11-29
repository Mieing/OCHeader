@class NSBundle;

@interface QSDKResourceManager : NSObject

@property (retain, nonatomic) NSBundle *bundle;

+ (id)sharedManager;

- (id)imageNamed:(id)a0;
- (void)setupBundle;
- (id)init;
- (void).cxx_destruct;

@end
