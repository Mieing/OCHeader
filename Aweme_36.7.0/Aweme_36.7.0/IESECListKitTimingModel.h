@class NSString;

@interface IESECListKitTimingModel : NSObject

@property (copy, nonatomic) NSString *bizID;
@property (nonatomic) double openTime;
@property (nonatomic) double loadBundleStartTime;
@property (nonatomic) double loadBundleEndTime;
@property (nonatomic) double networkStartTime;
@property (nonatomic) double networkEndTime;
@property (nonatomic) double listLoadStartTime;
@property (nonatomic) double listFirstLoadFinishTime;
@property (nonatomic) unsigned long long currentIdx;

- (void).cxx_destruct;
- (id)toDictionary;

@end
