@class NSString;

@interface BDPAppPreloadResultInfo : NSObject <NSCopying>

@property (nonatomic) double startTime;
@property (nonatomic) double totalPreloadDuration;
@property (copy, nonatomic) NSString *resultMsg;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
