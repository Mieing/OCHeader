@class NSString;

@interface AWEBDARVMoreInfoDOUYIN : NSObject

@property (copy, nonatomic) NSString *token;
@property (nonatomic) BOOL nextAdExist;
@property (nonatomic) long long glodCount;
@property (copy, nonatomic) NSString *goldCountUnit;
@property (copy, nonatomic) NSString *incentiveAdFrom;
@property (copy, nonatomic) NSString *reIncentiveAdFrom;

- (id)initWithDic:(id)a0;
- (void).cxx_destruct;

@end
