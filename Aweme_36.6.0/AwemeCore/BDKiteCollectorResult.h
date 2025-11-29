@class NSString;

@interface BDKiteCollectorResult : NSObject

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *feature;
@property (nonatomic) unsigned long long duration;
@property (copy, nonatomic) NSString *errorMsg;

- (void).cxx_destruct;

@end
