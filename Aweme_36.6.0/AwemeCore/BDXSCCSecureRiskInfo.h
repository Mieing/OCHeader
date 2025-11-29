@class NSString;

@interface BDXSCCSecureRiskInfo : NSObject

@property (nonatomic) unsigned long long level;
@property (copy, nonatomic) NSString *reason;
@property (nonatomic) BOOL canGoback;
@property (copy, nonatomic) NSString *blockStyle;

- (void).cxx_destruct;
- (id)init;

@end
