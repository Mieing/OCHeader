@class NSString;

@interface AWESearchVisionSeesionIdManager : NSObject

@property (copy, nonatomic) NSString *visionSessionID;

+ (id)sharedInstance;

- (void)updateSessionID;
- (void).cxx_destruct;

@end
