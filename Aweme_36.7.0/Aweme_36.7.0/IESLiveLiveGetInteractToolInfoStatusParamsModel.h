@class NSString, NSNumber;

@interface IESLiveLiveGetInteractToolInfoStatusParamsModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *downloadingId;
@property (copy, nonatomic) NSString *useStatus;
@property (copy, nonatomic) NSString *repelStatus;
@property (copy, nonatomic) NSString *isVideoMerge;
@property (retain, nonatomic) NSNumber *countLimit;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
