@class NSString;

@interface BDByteCastProbeResultModel : NSObject

@property (copy, nonatomic) NSString *host;
@property (nonatomic) long long port;
@property (nonatomic) BOOL pingSuccess;
@property (nonatomic) double pingTime;
@property (nonatomic) BOOL portReachable;
@property (copy, nonatomic) NSString *tag;

- (void).cxx_destruct;
- (id)toDictionary;
- (id)description;

@end
