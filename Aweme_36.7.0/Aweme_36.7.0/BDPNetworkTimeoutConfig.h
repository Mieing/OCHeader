@class NSNumber;

@interface BDPNetworkTimeoutConfig : NSObject

@property (retain, nonatomic) NSNumber *requestTime;
@property (retain, nonatomic) NSNumber *uploadFileTime;
@property (retain, nonatomic) NSNumber *downloadFileTime;
@property (retain, nonatomic) NSNumber *connectSocketTime;

+ (id)modelCustomPropertyMapper;
+ (void)bootstrapLaunch;

- (BOOL)modelCustomTransformFromDictionary:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
