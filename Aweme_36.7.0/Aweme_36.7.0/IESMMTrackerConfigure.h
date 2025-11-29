@class NSString, NSDictionary, NSArray;

@interface IESMMTrackerConfigure : NSObject

@property (nonatomic) BOOL useHMD;
@property (copy, nonatomic) NSString *deviceID;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) id /* block */ transformBlock;
@property (copy, nonatomic) NSDictionary *commonParams;
@property (copy, nonatomic) NSString *bundleName;
@property (copy, nonatomic) NSArray *configHostArray;
@property (copy, nonatomic) NSString *performanceUploadHost;

- (void).cxx_destruct;

@end
