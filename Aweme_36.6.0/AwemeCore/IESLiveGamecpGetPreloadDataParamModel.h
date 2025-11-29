@class NSString, NSNumber;

@interface IESLiveGamecpGetPreloadDataParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *taskId;
@property (retain, nonatomic) NSNumber *timeout;
@property (copy, nonatomic) NSString *preloadId;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
