@class NSArray;

@interface AWEPOINetworkCacheDataModel : NSObject

@property (nonatomic) double duration;
@property (nonatomic) double timestamp;
@property (readonly, nonatomic) BOOL isAvailable;
@property (copy, nonatomic) NSArray *data;

- (id)initData:(id)a0 duration:(double)a1;
- (void).cxx_destruct;

@end
