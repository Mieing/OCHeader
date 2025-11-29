@class NSString, NSSet, NSMutableArray;

@interface AWEOFGAuthMethodCache : NSObject

@property (nonatomic) BOOL updated;
@property (copy, nonatomic) NSString *clientKey;
@property (copy, nonatomic) NSSet *authMethodSet;
@property (retain, nonatomic) NSMutableArray *completions;
@property (nonatomic) long long status;

+ (id)modelPropertyWhitelist;

- (void).cxx_destruct;
- (id)init;
- (void)setUpdated:(BOOL)a0;
- (BOOL)updated;

@end
