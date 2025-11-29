@class NSString, NSDictionary;

@interface BrandAdDataItem : NSObject

@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) NSDictionary *dicAdInfo;
@property (copy, nonatomic) NSString *traceId;
@property (copy, nonatomic) NSString *aid;
@property (copy, nonatomic) NSString *bizType;
@property (nonatomic) unsigned int expiredTimeInSec;

- (id)description;
- (void).cxx_destruct;

@end
