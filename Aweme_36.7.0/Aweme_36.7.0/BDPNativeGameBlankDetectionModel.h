@class NSString, NSDictionary, NSDate, BDPUniqueID;

@interface BDPNativeGameBlankDetectionModel : NSObject

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (copy, nonatomic) NSDictionary *eventParams;
@property (copy, nonatomic) NSString *versionType;
@property (retain, nonatomic) NSDate *startTime;
@property (retain, nonatomic) NSString *routeID;
@property (copy, nonatomic) NSString *sceneName;
@property (copy, nonatomic) id /* block */ completeAction;

- (void).cxx_destruct;

@end
