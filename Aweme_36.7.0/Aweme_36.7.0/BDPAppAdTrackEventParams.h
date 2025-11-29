@class NSString, BDPUniqueID, NSDictionary;

@interface BDPAppAdTrackEventParams : NSObject

@property (copy, nonatomic) NSString *adType;
@property (copy, nonatomic) NSString *adUnitId;
@property (copy, nonatomic) BDPUniqueID *uniqueId;
@property (copy, nonatomic) NSString *adCategory;
@property (copy, nonatomic) NSString *mpName;
@property (copy, nonatomic) NSDictionary *extraDict;
@property (nonatomic) double duration;

- (void).cxx_destruct;

@end
