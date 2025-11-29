@class NSString;

@interface BDPBlankDetectionResultModel : NSObject

@property (nonatomic) BOOL isBlank;
@property (nonatomic) long long detectionDuration;
@property (nonatomic) long long uploadDuration;
@property (copy, nonatomic) NSString *storeID;

- (void).cxx_destruct;

@end
