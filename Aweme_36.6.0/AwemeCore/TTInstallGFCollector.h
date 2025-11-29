@class NSString;

@interface TTInstallGFCollector : NSObject

@property (copy, nonatomic) NSString *feature;
@property (nonatomic) long long duration;
@property (copy, nonatomic) NSString *errorMsg;

- (void).cxx_destruct;
- (id)init;

@end
