@class NSString;

@interface BDByteCastPPStatusInfo : NSObject

@property (copy, nonatomic) NSString *dramaId;
@property (copy, nonatomic) NSString *status;
@property (nonatomic) long long duration;
@property (nonatomic) long long position;
@property (nonatomic) float speed;
@property (copy, nonatomic) NSString *extra;

- (void).cxx_destruct;

@end
