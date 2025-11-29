@class NSString;

@interface QLogoSource : NSObject

@property (nonatomic) long long rule;
@property (nonatomic) int priority;
@property (copy, nonatomic) NSString *frontierName;
@property (copy, nonatomic) NSString *logoName;
@property (copy, nonatomic) NSString *logoURL;
@property (copy, nonatomic) NSString *logoNightURL;

- (void).cxx_destruct;

@end
