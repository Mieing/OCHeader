@class NSDictionary;

@interface AWEShowDataInjCacheInfo : NSObject

@property (nonatomic) unsigned long long result;
@property (nonatomic) unsigned long long resultReason;
@property (retain, nonatomic) id data;
@property (copy, nonatomic) NSDictionary *injectionData;

- (id)generateResultReasonString;
- (id)generateTrackParams;
- (void).cxx_destruct;

@end
