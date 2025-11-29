@class NSString;

@interface QNetflowItem : NSObject

@property (copy, nonatomic) NSString *biz_type;
@property (copy, nonatomic) NSString *url;
@property (nonatomic) long long rt;
@property (nonatomic) double up;
@property (nonatomic) double dw;
@property (nonatomic) long long up_time;
@property (nonatomic) long long dw_time;
@property (nonatomic) int err;

- (void).cxx_destruct;

@end
