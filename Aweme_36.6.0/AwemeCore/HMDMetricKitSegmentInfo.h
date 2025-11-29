@class NSString;

@interface HMDMetricKitSegmentInfo : NSObject

@property (retain, nonatomic) NSString *binaryName;
@property (retain, nonatomic) NSString *binaryUUID;
@property (nonatomic) unsigned long long startAddressBinaryTextSegment;
@property (nonatomic) unsigned long long endAddressBinaryTextSegment;
@property (nonatomic) unsigned long long anchorPoint;

- (void).cxx_destruct;

@end
